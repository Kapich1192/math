#ifndef _S21_MATH_TESTS_H_
#define _S21_MATH_TESTS_H_
#include <check.h>
#include <math.h>
#include <stdlib.h>
#include "../s21_math.h"

/* создание тестов */
Suite *s21_abs_suite_create(void);
/* Запуск тестов */
int test_abs(void);

#endif // _S21_MATH_TESTS_H_