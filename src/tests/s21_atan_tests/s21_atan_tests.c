#include "../../s21_math.h"
#include <stdlib.h>
#include <math.h>
#include <check.h>
#include "../s21_math_tests.h"

START_TEST(test_sub) {
        fail_unless(s21_abs(-5) == abs(-5));
}
END_TEST

Suite * make_s21_abs_suite(void) {
    Suite * s = suite_create ("sub"); // Создать Suite
    TCase * tc_sub = tcase_create ("sub"); // Создаем набор тестовых примеров
    suite_add_tcase (s, tc_sub); // добавляем тестовый пример в набор
    tcase_add_test (tc_sub, test_sub); // добавляем тестовый пример в набор тестов
    return s;
}