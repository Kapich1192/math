#include "../s21_math_tests.h"

START_TEST(s21_exp_1) {
        ck_assert_ldouble_eq_tol(s21_exp(15), exp(15), S21_EPS);
} END_TEST

START_TEST(s21_exp_2) {
    ck_assert_ldouble_eq_tol(s21_exp(21), exp(21), S21_EPS);
} END_TEST

Suite* s21_exp_suite_create(void) {

    Suite* suite = suite_create("s21_exp");

    TCase* tcase_core = tcase_create("Core of s21_exp");

    tcase_add_test(tcase_core,s21_exp_1);
    tcase_add_test(tcase_core,s21_exp_2);

    suite_add_tcase(suite, tcase_core);

    return suite;
}

int test_exp(void) {
    /*Создаем структуру и заполняем ее тестами*/
    Suite* suite = s21_exp_suite_create();
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