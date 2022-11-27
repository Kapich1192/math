#include "../s21_math_tests.h"

START_TEST(s21_atan_1) {
        ck_assert_ldouble_eq_tol(s21_atan(15), atan(15), S21_EPS);
} END_TEST

START_TEST(s21_atan_2) {
    ck_assert_ldouble_eq_tol(s21_atan(21), atan(21), S21_EPS);
} END_TEST

Suite* s21_atan_suite_create(void) {

    Suite* suite = suite_create("s21_atan");

    TCase* tcase_core = tcase_create("Core of s21_atan");

    tcase_add_test(tcase_core,s21_atan_1);
    tcase_add_test(tcase_core,s21_atan_2);

    suite_add_tcase(suite, tcase_core);

    return suite;
}

int test_atan(void) {
    /*Создаем структуру и заполняем ее тестами*/
    Suite* suite = s21_atan_suite_create();
    /*Создаем ранер тестов*/
    SRunner* suite_runner = srunner_create(suite);
    srunner_run_all(suite_runner,CK_NORMAL);

    int failed_count = srunner_ntests_failed(suite_runner);
    srunner_free(suite_runner);
    if (failed_count != 0) {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}