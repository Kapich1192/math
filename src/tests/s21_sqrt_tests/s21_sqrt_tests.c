#include "../s21_math_tests.h"

START_TEST(s21_sqrt_1) {
  ck_assert_ldouble_eq_tol(s21_sqrt(4), sqrt(4), S21_EPS);
}
END_TEST

START_TEST(s21_sqrt_2) {
  ck_assert_ldouble_eq_tol(s21_sqrt(9), sqrt(9), S21_EPS);
}
END_TEST

START_TEST(s21_sqrt_3) {
  ck_assert_ldouble_eq_tol(s21_sqrt(44.44), sqrt(44.44), S21_EPS);
}
END_TEST

START_TEST(s21_sqrt_4) {
  ck_assert_ldouble_eq_tol(s21_sqrt(44.444444), sqrt(44.444444), S21_EPS);
}
END_TEST

START_TEST(s21_sqrt_5){
    ck_assert_double_eq(s21_sqrt(0),sqrt(0));
}END_TEST

START_TEST(s21_sqrt_6){
    int t = 0;
    if(isnan(sqrt(-1)) && s21_isnan(s21_sqrt(-1))) t = 1;
    ck_assert_int_eq(1,t);
}END_TEST

START_TEST(s21_sqrt_7){
    ck_assert_ldouble_eq_tol(s21_sqrt(0.123123123123), sqrt(0.123123123123),S21_EPS);
}END_TEST

START_TEST(s21_sqrt_8) {
    ck_assert_ldouble_eq_tol(s21_sqrt(0.999999999),sqrt(0.999999999),S21_EPS);
} END_TEST

START_TEST(s21_sqrt_9) {
    ck_assert_ldouble_infinite(s21_sqrt(INFINITY));
    ck_assert_ldouble_infinite(sqrt(INFINITY));
} END_TEST

START_TEST(s21_sqrt_10) {
    ck_assert_ldouble_nan(s21_sqrt(-INFINITY));
    ck_assert_ldouble_nan(sqrt(-INFINITY));
} END_TEST

START_TEST(s21_sqrt_11) {
    ck_assert_ldouble_nan(s21_sqrt(-7));
    ck_assert_ldouble_nan(sqrt(-7));
} END_TEST

START_TEST(s21_sqrt_12) {
    ck_assert_ldouble_nan(s21_sqrt(NAN));
    ck_assert_ldouble_nan(sqrt(NAN));
} END_TEST

START_TEST(s21_sqrt_13) {
    ck_assert_ldouble_eq_tol(s21_sqrt(159159159159.159159159),sqrt(159159159159.159159159),S21_EPS);
} END_TEST

START_TEST(s21_sqrt_14) {
    ck_assert_ldouble_nan(s21_sqrt(-159159159159.159159159));
    ck_assert_ldouble_nan(sqrt(-159159159159.159159159));
} END_TEST

START_TEST(s21_sqrt_15) {
    ck_assert_ldouble_eq_tol(s21_sqrt(17.01),sqrt(17.01), S21_EPS);
} END_TEST

Suite* s21_sqrt_suite_create(void) {
  Suite* suite = suite_create("s21_sqrt");

  TCase* tcase_core = tcase_create("Core of s21_sqrt");

  tcase_add_test(tcase_core, s21_sqrt_1);
  tcase_add_test(tcase_core, s21_sqrt_2);
  tcase_add_test(tcase_core, s21_sqrt_3);
  tcase_add_test(tcase_core, s21_sqrt_4);
  tcase_add_test(tcase_core, s21_sqrt_5);
  tcase_add_test(tcase_core, s21_sqrt_6);
  tcase_add_test(tcase_core, s21_sqrt_7);
  tcase_add_test(tcase_core, s21_sqrt_8);
  tcase_add_test(tcase_core, s21_sqrt_9);
  tcase_add_test(tcase_core, s21_sqrt_10);
  tcase_add_test(tcase_core, s21_sqrt_11);
  tcase_add_test(tcase_core, s21_sqrt_12);
  tcase_add_test(tcase_core, s21_sqrt_13);
  tcase_add_test(tcase_core, s21_sqrt_14);
  tcase_add_test(tcase_core, s21_sqrt_15);

  suite_add_tcase(suite, tcase_core);

  return suite;
}

int test_sqrt(void) {
  /*Создаем структуру и заполняем ее тестами*/
  Suite* suite = s21_sqrt_suite_create();
  /*Создаем ранер тестов*/
  SRunner* suite_runner = srunner_create(suite);
  srunner_run_all(suite_runner, CK_NORMAL);

  int failed_count = srunner_ntests_failed(suite_runner);
  srunner_free(suite_runner);
  if (failed_count != 0) {
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}