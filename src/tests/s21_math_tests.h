#ifndef _S21_MATH_TESTS_H_
#define _S21_MATH_TESTS_H_
#include <check.h>
#include <math.h>
#include <stdlib.h>

#include "../s21_math.h"

/* создание тестов */
Suite* s21_abs_suite_create(void);
Suite* s21_acos_suite_create(void);
Suite* s21_asin_suite_create(void);
Suite* s21_atan_suite_create(void);
Suite* s21_ceil_suite_create(void);
Suite* s21_cos_suite_create(void);
Suite* s21_exp_suite_create(void);
Suite* s21_fabs_suite_create(void);
Suite* s21_floor_suite_create(void);
Suite* s21_fmod_suite_create(void);
Suite* s21_log_suite_create(void);
Suite* s21_pow_suite_create(void);
Suite* s21_sin_suite_create(void);
Suite* s21_sqrt_suite_create(void);
Suite* s21_tan_suite_create(void);
/* Запуск тестов */
int test_abs(void);
int test_acos(void);
int test_asin(void);
int test_atan(void);
int test_ceil(void);
int test_cos(void);
int test_exp(void);
int test_fabs(void);
int test_floor(void);
int test_fmod(void);
int test_log(void);
int test_pow(void);
int test_sin(void);
int test_sqrt(void);
int test_tan(void);

#endif  // _S21_MATH_TESTS_H_