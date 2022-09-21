CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11 -g
LFLAGS = -fprofile-arcs -ftest-coverage
INC_CHECK = $(shell pkg-config --cflags --libs check)

all: my_math.a test gcov_report

clean:
	rm -rf *.o *.a test *.html *.css *.out *.gcda *.gcno *.a_check

test: my_math.a_check my_math_tests.c
	$(CC) $(CFLAGS) -lcheck $? -coverage -o $@

my_math.a_check: my_math.c
	$(CC) -c $(CFLAGS) -coverage -std=c11 -pedantic $?
	ar -rcs $@ *.o
	rm -f *.o

rebuild: clean all

gcov_report: test
	./$?
	gcovr -r . --html --html-details -o coverage-report.html
	rm -f tests_my_math.gcda tests_my_math.gcno
	open coverage-report.html

my_math.a: my_math.c
	gcc -Wall -Wextra -Werror my_math.c -c -o my_math.o
	ar rc libmy_math.a my_math.o
	ranlib libmy_math.a
	cp libmy_math.a ./my_math.a
	rm my_math.o

