#ifndef SRC_MY_MATH_H_
#define SRC_MY_MATH_H_

#include <stdio.h>
#include <stdlib.h>
#define MY_PL_INFINITY 1.0 / 0.0
#define MY_MIN_INFINITY -1.0/0.0
#define MY_NAN 0.0 / 0.0
#define MY_EPS 1e-25
#define MY_PI 3.14159265358979323846
#define MY_NAN 0.0 / 0.0
#define MY_NEGZERO -1e-20
#define MY_INF 1.0 / 0.0
#define MY_DBL_MAX 1.7976931348623158e+308
#define MY_e 2.71828182845904523536


int my_abs(int x);
long double my_acos(double x);
long double my_asin(double x);
long double my_atan(double x);
long double my_ceil(double x);
long double my_cos(double x);
long double my_exp(double x);
long double my_fabs(double x);
long double my_floor(double x);
long double my_fmod(double x, double y);
long double my_log(double x);
long double my_pow(double base, double exp);
long double my_sin(double x);
long double my_sqrt(double x);
long double my_tan(double x);

#endif  // SRC_MY_MATH_H_
