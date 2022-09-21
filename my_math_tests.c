#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "my_math.h"

START_TEST(abs_1) {
        char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
        snprintf(my_arr, sizeof(char) * 50, "%.6d", my_abs(512));
        snprintf(arr, sizeof(char) * 50, "%.6d", abs(512));
        ck_assert_str_eq(my_arr, arr);
        ck_assert_int_eq(my_abs(512), abs(512));
        free(my_arr);
        free(arr);
}

END_TEST

START_TEST(abs_2) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6d", my_abs(-512));
    snprintf(arr, sizeof(char) * 50, "%.6d", abs(-512));
    ck_assert_str_eq(my_arr, arr);
    ck_assert_int_eq(my_abs(1234567890), abs(1234567890));
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(abs_3) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6d", my_abs(1234567890));
    snprintf(arr, sizeof(char) * 50, "%.6d", abs(1234567890));
    ck_assert_str_eq(my_arr, arr);
    ck_assert_int_eq(my_abs(1234567890), abs(1234567890));
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(abs_4) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6d", my_abs(-1234567890));
    snprintf(arr, sizeof(char) * 50, "%.6d", abs(-1234567890));
    ck_assert_str_eq(my_arr, arr);
    ck_assert_int_eq(my_abs(-1234567890), abs(-1234567890));
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(abs_5) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6d", my_abs(0));
    snprintf(arr, sizeof(char) * 50, "%.6d", abs(0));
    ck_assert_str_eq(my_arr, arr);
    ck_assert_int_eq(my_abs(0), abs(0));
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(acos_1) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_acos(1));
    snprintf(arr, sizeof(char) * 50, "%.6f", acos(1));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(acos_2) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_acos(2));
    snprintf(arr, sizeof(char) * 50, "%.6f", acos(2));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(acos_3) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_acos(0));
    snprintf(arr, sizeof(char) * 50, "%.6f", acos(0));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(acos_4) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_acos(-1));
    snprintf(arr, sizeof(char) * 50, "%.6f", acos(-1));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(acos_5) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_acos(-10));
    snprintf(arr, sizeof(char) * 50, "%.6f", acos(-10));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(acos_6) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_acos(-0.987));
    snprintf(arr, sizeof(char) * 50, "%.6f", acos(-0.987));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(acos_7) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_acos(-0.2));
    snprintf(arr, sizeof(char) * 50, "%.6f", acos(-0.2));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(acos_8) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_acos(-0.286350935));
    snprintf(arr, sizeof(char) * 50, "%.6f", acos(-0.286350935));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(acos_9) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_acos(0.4952035745));
    snprintf(arr, sizeof(char) * 50, "%.6f", acos(0.4952035745));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(acos_10) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_acos(0.49));
    snprintf(arr, sizeof(char) * 50, "%.6f", acos(0.49));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(asin_1) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_asin(1));
    snprintf(arr, sizeof(char) * 50, "%.6f", asin(1));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(asin_2) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_asin(2));
    snprintf(arr, sizeof(char) * 50, "%.6f", asin(2));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(asin_3) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_asin(0));
    snprintf(arr, sizeof(char) * 50, "%.6f", asin(0));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(asin_4) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_asin(-1));
    snprintf(arr, sizeof(char) * 50, "%.6f", asin(-1));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(asin_5) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_asin(-10));
    snprintf(arr, sizeof(char) * 50, "%.6f", asin(-10));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(asin_6) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_asin(-0.987));
    snprintf(arr, sizeof(char) * 50, "%.6f", asin(-0.987));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(asin_7) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_asin(-0.2));
    snprintf(arr, sizeof(char) * 50, "%.6f", asin(-0.2));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(asin_8) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_asin(-0.286350935));
    snprintf(arr, sizeof(char) * 50, "%.6f", asin(-0.286350935));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(asin_9) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_asin(0.4952035745));
    snprintf(arr, sizeof(char) * 50, "%.6f", asin(0.4952035745));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(asin_10) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_asin(0.49));
    snprintf(arr, sizeof(char) * 50, "%.6f", asin(0.49));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(atan_1) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_atan(1));
    snprintf(arr, sizeof(char) * 50, "%.6f", atan(1));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(atan_2) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_atan(2));
    snprintf(arr, sizeof(char) * 50, "%.6f", atan(2));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(atan_3) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_atan(0));
    snprintf(arr, sizeof(char) * 50, "%.6f", atan(0));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(atan_4) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_atan(-1));
    snprintf(arr, sizeof(char) * 50, "%.6f", atan(-1));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(atan_5) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_atan(-10));
    snprintf(arr, sizeof(char) * 50, "%.6f", atan(-10));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(atan_6) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_atan(-0.987));
    snprintf(arr, sizeof(char) * 50, "%.6f", atan(-0.987));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(atan_7) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_atan(-0.2));
    snprintf(arr, sizeof(char) * 50, "%.6f", atan(-0.2));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(atan_8) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_atan(-0.286350935));
    snprintf(arr, sizeof(char) * 50, "%.6f", atan(-0.286350935));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(atan_9) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_atan(0.4952035745));
    snprintf(arr, sizeof(char) * 50, "%.6f", atan(0.4952035745));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(atan_10) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_atan(0.49));
    snprintf(arr, sizeof(char) * 50, "%.6f", atan(0.49));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(ceil_1) {
    ck_assert_ldouble_eq(my_ceil(-0.386778348), ceil(-0.386778348));
}

END_TEST

START_TEST(ceil_2) {
    ck_assert_ldouble_eq(my_ceil(0.386778348), ceil(0.386778348));
}

END_TEST

START_TEST(ceil_3) {
    ck_assert_ldouble_eq(my_ceil(-4645.489789), ceil(-4645.489789));
}

END_TEST

START_TEST(ceil_4) {
    ck_assert_ldouble_eq(my_ceil(4645.489789), ceil(4645.489789));
}

END_TEST

START_TEST(ceil_5) {
    ck_assert_ldouble_eq(my_ceil(0), ceil(0));
}

END_TEST

START_TEST(ceil_6) {
    ck_assert_ldouble_eq(my_ceil(10), ceil(10));
}

END_TEST

START_TEST(ceil_7) {
    ck_assert_ldouble_eq(my_ceil(-10), ceil(-10));
}

END_TEST

START_TEST(cos_1) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_cos(1));
    snprintf(arr, sizeof(char) * 50, "%.6f", cos(1));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(cos_2) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_cos(2));
    snprintf(arr, sizeof(char) * 50, "%.6f", cos(2));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(cos_3) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_cos(0));
    snprintf(arr, sizeof(char) * 50, "%.6f", cos(0));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(cos_4) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_cos(-1));
    snprintf(arr, sizeof(char) * 50, "%.6f", cos(-1));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(cos_5) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_cos(-10));
    snprintf(arr, sizeof(char) * 50, "%.6f", cos(-10));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(cos_6) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_cos(-0.987));
    snprintf(arr, sizeof(char) * 50, "%.6f", cos(-0.987));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(cos_7) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_cos(-0.2));
    snprintf(arr, sizeof(char) * 50, "%.6f", cos(-0.2));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(cos_8) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_cos(-0.286350935));
    snprintf(arr, sizeof(char) * 50, "%.6f", cos(-0.286350935));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(cos_9) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_cos(0.4952035745));
    snprintf(arr, sizeof(char) * 50, "%.6f", cos(0.4952035745));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(cos_10) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_cos(0.49));
    snprintf(arr, sizeof(char) * 50, "%.6f", cos(0.49));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(exp_1) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_exp(1));
    snprintf(arr, sizeof(char) * 50, "%.6f", exp(1));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(exp_2) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_exp(2));
    snprintf(arr, sizeof(char) * 50, "%.6f", exp(2));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(exp_3) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_exp(0));
    snprintf(arr, sizeof(char) * 50, "%.6f", exp(0));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(exp_4) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_exp(-1));
    snprintf(arr, sizeof(char) * 50, "%.6f", exp(-1));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(exp_5) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_exp(-10));
    snprintf(arr, sizeof(char) * 50, "%.6f", exp(-10));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(exp_6) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_exp(-0.987));
    snprintf(arr, sizeof(char) * 50, "%.6f", exp(-0.987));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(exp_7) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_exp(-0.2));
    snprintf(arr, sizeof(char) * 50, "%.6f", exp(-0.2));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(exp_8) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_exp(-0.286350935));
    snprintf(arr, sizeof(char) * 50, "%.6f", exp(-0.286350935));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(exp_9) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_exp(0.4952035745));
    snprintf(arr, sizeof(char) * 50, "%.6f", exp(0.4952035745));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(exp_10) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_exp(0.49));
    snprintf(arr, sizeof(char) * 50, "%.6f", exp(0.49));
    ck_assert_str_eq(my_arr, arr);
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(fabs_1) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_fabs(512.123));
    snprintf(arr, sizeof(char) * 50, "%.6f", fabs(512.123));
    ck_assert_str_eq(my_arr, arr);
    ck_assert_int_eq(my_fabs(512.123), fabs(512.123));
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(fabs_2) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_fabs(-512.123));
    snprintf(arr, sizeof(char) * 50, "%.6f", fabs(-512.123));
    ck_assert_str_eq(my_arr, arr);
    ck_assert_int_eq(my_fabs(-512.123), fabs(-512.123));
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(fabs_3) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_fabs(123456789.123456789));
    snprintf(arr, sizeof(char) * 50, "%.6f", fabs(123456789.123456789));
    ck_assert_str_eq(my_arr, arr);
    ck_assert_int_eq(my_fabs(123456789.123456789), fabs(123456789.123456789));
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(fabs_4) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_fabs(-123456789.123456789));
    snprintf(arr, sizeof(char) * 50, "%.6f", fabs(-123456789.123456789));
    ck_assert_str_eq(my_arr, arr);
    ck_assert_int_eq(my_fabs(-123456789.123456789), fabs(-123456789.123456789));
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(fabs_5) {
    char *my_arr = malloc(sizeof(char) * 50), *arr = malloc(sizeof(char) * 50);
    snprintf(my_arr, sizeof(char) * 50, "%.6Lf", my_fabs(0.0));
    snprintf(arr, sizeof(char) * 50, "%.6f", fabs(0.0));
    ck_assert_str_eq(my_arr, arr);
    ck_assert_int_eq(my_abs(0), abs(0));
    free(my_arr);
    free(arr);
}

END_TEST

START_TEST(floor_1) {
    ck_assert_ldouble_eq(my_floor(-0.386778348), floor(-0.386778348));
}

END_TEST

START_TEST(floor_2) {
    ck_assert_ldouble_eq(my_floor(0.386778348), floor(0.386778348));
}

END_TEST

START_TEST(floor_3) {
    ck_assert_ldouble_eq(my_floor(-4645.489789), floor(-4645.489789));
}

END_TEST

START_TEST(floor_4) {
    ck_assert_ldouble_eq(my_floor(4645.489789), floor(4645.489789));
}

END_TEST

START_TEST(floor_5) {
    ck_assert_ldouble_eq(my_floor(0), floor(0));
}

END_TEST

START_TEST(floor_6) {
    ck_assert_ldouble_eq(my_floor(10), floor(10));
}

END_TEST

START_TEST(floor_7) {
    ck_assert_ldouble_eq(my_floor(-10), floor(-10));
}

END_TEST

START_TEST(test_fmod) {
    char str_std[100] = {0};
    char str_our[100] = {0};
    long double res_std, res_our;
    double x;
    double y;

    x = 0;
    y = 0;
    res_std = fmod(x, y);
    res_our = my_fmod(x, y);
    snprintf(str_std, sizeof(str_std), "%.6Lf", res_std);
    snprintf(str_our, sizeof(str_our), "%.6Lf", res_our);
    ck_assert_str_eq(str_std, str_our);

    x = 2;
    y = 4;
    res_std = fmod(x, y);
    res_our = my_fmod(x, y);
    snprintf(str_std, sizeof(str_std), "%.6Lf", res_std);
    snprintf(str_our, sizeof(str_our), "%.6Lf", res_our);
    ck_assert_str_eq(str_std, str_our);

    x = 4.2;
    y = 4;
    res_std = fmod(x, y);
    res_our = my_fmod(x, y);
    snprintf(str_std, sizeof(str_std), "%.6Lf", res_std);
    snprintf(str_our, sizeof(str_our), "%.6Lf", res_our);
    ck_assert_str_eq(str_std, str_our);
}

END_TEST

START_TEST(test_log) {
    char str_std[100] = {0};
    char str_our[100] = {0};
    long double res_std = 0, res_our = 0;
    double x = 0;

    x = 0;
    res_std = log(x);
    res_our = my_log(x);
    snprintf(str_std, sizeof(str_std), "%.6Lf", res_std);
    snprintf(str_our, sizeof(str_our), "%.6Lf", res_our);
    ck_assert_str_eq(str_std, str_our);

    x = 0.5;
    res_std = log(x);
    res_our = my_log(x);
    snprintf(str_std, sizeof(str_std), "%.6Lf", res_std);
    snprintf(str_our, sizeof(str_our), "%.6Lf", res_our);
    ck_assert_str_eq(str_std, str_our);

    x = 2;
    res_std = log(x);
    res_our = my_log(x);
    snprintf(str_std, sizeof(str_std), "%.6Lf", res_std);
    snprintf(str_our, sizeof(str_our), "%.6Lf", res_our);
    ck_assert_str_eq(str_std, str_our);

    x = -2;
    res_std = log(x);
    res_our = my_log(x);
    snprintf(str_std, sizeof(str_std), "%.6Lf", res_std);
    snprintf(str_our, sizeof(str_our), "%.6Lf", res_our);
    ck_assert_str_eq(str_std, str_our);
}

END_TEST

START_TEST(test_pow) {
    char str_std[100] = {0};
    char str_our[100] = {0};
    long double res_std = 0, res_our = 0;
    double x[] = {0, 1, -1, 1.3, -3};
    double y[] = {0, 1, -1, 2.3};
    size_t i = 0;
    size_t j = 0;
    for (i = 0; i < (sizeof(x) / sizeof(double)); i++) {
        for (j = 0; j < (sizeof(y) / sizeof(double)); j++) {
            res_std = pow(x[i], y[j]);
            res_our = my_pow(x[i], y[j]);
            snprintf(str_std, sizeof(str_std), "%.6Lf", res_std);
            snprintf(str_our, sizeof(str_our), "%.6Lf", res_our);
            ck_assert_str_eq(str_std, str_our);
        }
    }
}

END_TEST

START_TEST(test_sin) {
    char str_std[100] = {0};
    char str_our[100] = {0};
    long double res_std = 0, res_our = 0;
    double x[] = {0, 1, -1, 42.21, -42.21, 4, 3};

    for (size_t i = 0; i < (sizeof(x) / sizeof(double)); i++) {
        res_std = sin(x[i]);
        res_our = my_sin(x[i]);
        if (res_std == res_our) {
            ck_assert_double_eq(res_std, res_our);
        } else {
            snprintf(str_std, sizeof(str_std), "%.6Lf", res_std);
            snprintf(str_our, sizeof(str_our), "%.6Lf", res_our);
            ck_assert_str_eq(str_std, str_our);
        }
    }
}

END_TEST

START_TEST(test_sqrt) {
    char str_std[100] = {0};
    char str_our[100] = {0};
    long double res_std = 0, res_our = 0;
    double x[] = {0, 1, -1, 42.21, -42.21, 4, 3};

    for (size_t i = 0; i < (sizeof(x) / sizeof(double)); i++) {
        res_std = sqrt(x[i]);
        res_our = my_sqrt(x[i]);
        if (res_std == res_our) {
            ck_assert_double_eq(res_std, res_our);
        } else {
            snprintf(str_std, sizeof(str_std), "%.6Lf", res_std);
            snprintf(str_our, sizeof(str_our), "%.6Lf", res_our);
            ck_assert_str_eq(str_std, str_our);
        }
    }
}

END_TEST

START_TEST(test_tan) {
    char str_std[100] = {0};
    char str_our[100] = {0};
    long double res_std = 0, res_our = 0;
    double x[] = {0, 1, -1, MY_PI};

    for (size_t i = 0; i < (sizeof(x) / sizeof(double)); i++) {
        res_std = tan(x[i]);
        res_our = my_tan(x[i]);
        if (res_std == res_our) {
            ck_assert_double_eq(res_std, res_our);
        } else {
            snprintf(str_std, sizeof(str_std), "%.6Lf", res_std);
            snprintf(str_our, sizeof(str_our), "%.6Lf", res_our);
            ck_assert_str_eq(str_std, str_our);
        }
    }
}

END_TEST

        Suite *funcs_suite() {
    Suite * my;
    TCase *tc_core;

    my = suite_create("my_suite");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, abs_1);
    tcase_add_test(tc_core, abs_2);
    tcase_add_test(tc_core, abs_3);
    tcase_add_test(tc_core, abs_4);
    tcase_add_test(tc_core, abs_5);

    tcase_add_test(tc_core, acos_1);
    tcase_add_test(tc_core, acos_2);
    tcase_add_test(tc_core, acos_3);
    tcase_add_test(tc_core, acos_4);
    tcase_add_test(tc_core, acos_5);
    tcase_add_test(tc_core, acos_6);
    tcase_add_test(tc_core, acos_7);
    tcase_add_test(tc_core, acos_8);
    tcase_add_test(tc_core, acos_9);
    tcase_add_test(tc_core, acos_10);

    tcase_add_test(tc_core, asin_1);
    tcase_add_test(tc_core, asin_2);
    tcase_add_test(tc_core, asin_3);
    tcase_add_test(tc_core, asin_4);
    tcase_add_test(tc_core, asin_5);
    tcase_add_test(tc_core, asin_6);
    tcase_add_test(tc_core, asin_7);
    tcase_add_test(tc_core, asin_8);
    tcase_add_test(tc_core, asin_9);
    tcase_add_test(tc_core, asin_10);

    tcase_add_test(tc_core, atan_1);
    tcase_add_test(tc_core, atan_2);
    tcase_add_test(tc_core, atan_3);
    tcase_add_test(tc_core, atan_4);
    tcase_add_test(tc_core, atan_5);
    tcase_add_test(tc_core, atan_6);
    tcase_add_test(tc_core, atan_7);
    tcase_add_test(tc_core, atan_8);
    tcase_add_test(tc_core, atan_9);
    tcase_add_test(tc_core, atan_10);

    tcase_add_test(tc_core, ceil_1);
    tcase_add_test(tc_core, ceil_2);
    tcase_add_test(tc_core, ceil_3);
    tcase_add_test(tc_core, ceil_4);
    tcase_add_test(tc_core, ceil_5);
    tcase_add_test(tc_core, ceil_6);
    tcase_add_test(tc_core, ceil_7);

    tcase_add_test(tc_core, cos_1);
    tcase_add_test(tc_core, cos_2);
    tcase_add_test(tc_core, cos_3);
    tcase_add_test(tc_core, cos_4);
    tcase_add_test(tc_core, cos_5);
    tcase_add_test(tc_core, cos_6);
    tcase_add_test(tc_core, cos_7);
    tcase_add_test(tc_core, cos_8);
    tcase_add_test(tc_core, cos_9);
    tcase_add_test(tc_core, cos_10);

    tcase_add_test(tc_core, exp_1);
    tcase_add_test(tc_core, exp_2);
    tcase_add_test(tc_core, exp_3);
    tcase_add_test(tc_core, exp_4);
    tcase_add_test(tc_core, exp_5);
    tcase_add_test(tc_core, exp_6);
    tcase_add_test(tc_core, exp_7);
    tcase_add_test(tc_core, exp_8);
    tcase_add_test(tc_core, exp_9);
    tcase_add_test(tc_core, exp_10);

    tcase_add_test(tc_core, fabs_1);
    tcase_add_test(tc_core, fabs_2);
    tcase_add_test(tc_core, fabs_3);
    tcase_add_test(tc_core, fabs_4);
    tcase_add_test(tc_core, fabs_5);

    tcase_add_test(tc_core, floor_1);
    tcase_add_test(tc_core, floor_2);
    tcase_add_test(tc_core, floor_3);
    tcase_add_test(tc_core, floor_4);
    tcase_add_test(tc_core, floor_5);
    tcase_add_test(tc_core, floor_6);
    tcase_add_test(tc_core, floor_7);

    tcase_add_test(tc_core, test_fmod);
    tcase_add_test(tc_core, test_log);
    tcase_add_test(tc_core, test_pow);
    tcase_add_test(tc_core, test_sin);
    tcase_add_test(tc_core, test_sqrt);
    tcase_add_test(tc_core, test_tan);

    suite_add_tcase(my, tc_core);

    return my;
}

int main(void) {
    int number_failed;
    Suite * my;
    SRunner *sr;

    my = funcs_suite();
    sr = srunner_create(my);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
//    sleep(100);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
