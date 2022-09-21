#include "my_math.h"


int my_abs(int x) {
    if (x < 0) x = -x;
    return x;
}

long double my_acos(double x) {
    if (x == 1) return 0;
    if (x == 0) return MY_PI / 2;
    if (x == -1) return MY_PI;
    if (x > 0 && x < 1) {
        return my_atan(my_sqrt(1 - my_pow(x, 2)) / x);
    } else if (x > -1 && x < 0) {
        return MY_PI + my_atan(my_sqrt(1 - my_pow(x, 2)) / x);
    }
    return MY_NAN;
}

long double my_asin(double x) {
    if (x == 1) return MY_PI / 2;
    if (x == 0) return 0;
    if (x == -1) return -MY_PI / 2;
    if (my_abs(x) < 1) {
        return my_atan(x / (my_sqrt(1 - my_pow(x, 2))));
    }
    return MY_NAN;
}

long double my_atan(double x) {
    if (x == 1) return MY_PI / 4;
    if (x == 0) return 0;
    if (x == -1) return -MY_PI / 4;
    long double sum = 0;
    if ((x > 0 && x < 1) || (x > -1 && x < 0)) {
        for (int i = 0; i < 500; i++) {
            sum += (my_pow(-1, i) * my_pow(x, 1 + 2 * i)) / (1 + 2 * i);
        }
    } else {
        for (int i = 0; i < 500; i++) {
            sum += (my_pow(-1, i) * my_pow(x, -1 - 2 * i)) / (1 + 2 * i);
        }
        sum = (MY_PI * my_sqrt(my_pow(x, 2))) / (2 * x) - sum;
    }
    return sum;
}

long double my_ceil(double x) {
    long double fraction = x - (int) x, res;
    if (x > 0 && fraction != 0) res = x - fraction + 1;
    else
        res = x - fraction;
    return res;
}

long double my_cos(double x) {
    int sign = 1;
    x = my_fabs(x);
    while (my_fabs(x - MY_PI) > MY_PI) {
        x -= MY_PI;
        sign *= -1;
    }
    long double sum = 0;
    double eps = 0.00000001;
    double last = 1;
    int n = 0;
    double xx = x * x;
    while (my_fabs(last) > eps) {
        sum += last;
        last *= -xx / ((2 * n + 1) * (2 * n + 2));
        n++;
    }
    return sign * sum;
}

long double my_exp(double x) {
    if (x != x) {
        return MY_NAN;
    } else if (x == MY_INF) {
        return MY_INF;
    } else if (x == -MY_INF) {
        return 0;
    }
    int flag = 0;
    if (x < 0) {
        x *= -1;
        flag = 1;
    }
    long double add_value = (long double)x, series = 1, i = 1, p = 1;
    while (my_fabs(i / series) > 1e-100) {
        i = (i * add_value) / p;
        series += i;
        p++;
    }
    if (flag == 1) {
        if (series > MY_DBL_MAX) {
            series = 0;
        } else {
            series = 1. / series;
        }
    }
    if (series > MY_DBL_MAX) {
        return MY_INF;
    }
    return series;
}

long double my_fabs(double x) {
    if (x < 0) x = -x;
    return x;
}

long double my_floor(double x) {
    long double fraction = x - (int) x, res;
    if (x < 0 && fraction != 0) res = x - fraction - 1;
    else
        res = x - fraction;
    return res;
}

long double my_fmod(double x, double y) {
    if (x != x || x == MY_INF || y != y || y == 0) {
        return MY_NAN;
    } else if (x == 0) {
        return 0;
    } else if (x == MY_NEGZERO || (x < 0 && my_fabs(x) == my_fabs(y))) {
        return MY_NEGZERO;
    }
    return x - (int)(x / y) * y;
}

long double my_log(double x) {
    if (x < 0 || x == -MY_INF || x != x) {
        return MY_NAN;
    } else if (x == 0) {
        return -MY_INF;
    } else if (x == MY_INF) {
        return MY_INF;
    } else if (x == 1) {
        return 0;
    }
    double N, P, A;
    P = x;
    N = 0.0;
    while (P >= MY_e) {
        P /= MY_e;
        N++;
    }
    N += (P / MY_e);
    P = x;
    int j = 0;
    do {
        double L, R;
        A = N;
        L = (P / (my_exp(N - 1.0)));
        R = ((N - 1.0) * MY_e);
        N = ((L + R) / MY_e);
        j++;
    } while (N != A && j < 620);
    return N;
}

long double my_pow(double base, double exp) {
    if (base == 1 || exp == 0 || (base == -1 && (exp == -MY_INF || exp == MY_INF))) {
        return 1;
    } else if ((my_fabs(base) < 1 && exp == -MY_INF) || (my_fabs(base) > 1 && exp == MY_INF) ||
               (base == -MY_INF && ((exp > 0 && (int)exp % 2 == 0) || exp == MY_INF)) ||
               (base == MY_INF && exp > 0)) {
        return MY_INF;
    } else if ((base < 0 && (int)exp - exp != 0) || (base != base && exp != exp)) {
        return MY_NAN;
    } else if ((base == 0 && exp > 0) || (my_fabs(base) > 1 && exp == -MY_INF) ||
               (my_fabs(base) < 1 && exp == MY_INF) ||
               (base == MY_NEGZERO && (exp > 0 && (int)exp % 2 == 0)) ||
               (base == -MY_INF && (exp < 0 && (int)exp % 2 == 0)) || (base == MY_INF && exp < 0)) {
        return 0;
    } else if ((base == MY_NEGZERO && (exp > 0 && (int)exp % 2 != 0)) ||
               (base == -MY_INF && (exp < 0 && (int)exp % 2 != 0))) {
        return MY_NEGZERO;
    } else if (base == -MY_INF && (exp > 0 && (int)exp % 2 != 0)) {
        return -MY_INF;
    }
    int flag = 0;
    if (base < 0) {
        if ((int)exp % 2 != 0) {
            flag = 1;
        }
        base = my_fabs(base);
    }
    return flag ? -my_exp(exp * my_log(base)) : my_exp(exp * my_log(base));
}

long double my_sin(double x) {
    long double res;

    if (x == MY_INF || x == -MY_INF || x != x) {
        res = MY_NAN;
    }
    x = my_fmod(x, 2 * MY_PI);
    while (x > MY_PI) {
        x = x - 2 * MY_PI;
    }

    while (x < -MY_PI) {
        x = x + 2 * MY_PI;
    }
    res = x;
    int k = 1;
    long double temp = x;
    while (my_fabs(temp) > MY_EPS) {
        temp = (-temp * x * x) / ((2 * k + 1) * (2 * k));
        res = res + temp;
        k++;
    }
    return res;
}

long double my_sqrt(double x) {
    double root_degree = 2;         // степень 2
    double root = x / root_degree;  // приближенное значение корня для начала
    if (x < 0) {
        root = -0.0 / 0.0;   // убунту возвращает -нан
    } else {
        double eps = 0.0000001;
        double num_root = x;        // значение корня после деления
        while (my_fabs(root - num_root) >= eps) {
            num_root = x;
            for (int i = 1; i < root_degree; i++) num_root /= root;
            // формула Ньютона
            root = num_root / root_degree + root * (1.0 - 1.0 / root_degree);
        }
    }
    return root;
}

long double my_tan(double x) {
    return (my_sin(x) / my_cos(x));
}
