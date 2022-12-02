#include "../s21_math_tests.h"

START_TEST(s21_log_1) { ck_assert_ldouble_eq_tol(s21_log(1), log(1), S21_EPS); }
END_TEST

START_TEST(s21_log_2) {
  ck_assert_ldouble_eq_tol(s21_log(15), log(15), S21_EPS);
}
END_TEST

START_TEST(s21_log_3) {
  ck_assert_ldouble_eq_tol(s21_log(0.2544576373), log(0.2544576373), S21_EPS);
}
END_TEST

START_TEST(s21_log_4) {
  ck_assert_ldouble_nan(s21_log(-6));
  ck_assert_ldouble_nan(log(-6));
}
END_TEST

START_TEST(s21_log_5) {
  ck_assert_ldouble_nan(s21_log(-1));
  ck_assert_ldouble_nan(log(-1));
}
END_TEST

START_TEST(s21_log_6) {
  ck_assert_ldouble_eq_tol(s21_log(1.123123), log(1.123123), S21_EPS);
}
END_TEST

START_TEST(s21_log_7) {
  ck_assert_ldouble_nan(s21_log(S21_NAN));
  ck_assert_ldouble_nan(exp(S21_NAN));
}
END_TEST

START_TEST(s21_log_8) {
  ck_assert_ldouble_nan(s21_log(-567));
  ck_assert_ldouble_nan(log(-567));
}
END_TEST

START_TEST(s21_log_9) {
  ck_assert_ldouble_eq_tol(s21_log(999), log(999), S21_EPS);
}
END_TEST

START_TEST(s21_log_10) {
  ck_assert_ldouble_eq_tol(s21_log(21), log(21), S21_EPS);
}
END_TEST

START_TEST(s21_log_11) {
  ck_assert_ldouble_eq_tol(s21_log(1.156156), log(1.156156), S21_EPS);
}
END_TEST

START_TEST(s21_log_12) {
  ck_assert_ldouble_eq_tol(s21_log(1.156156), log(1.156156), S21_EPS);
}
END_TEST

START_TEST(s21_log_13) {
  ck_assert_ldouble_eq_tol(s21_log(0.2544576373), log(0.2544576373), S21_EPS);
}
END_TEST

START_TEST(s21_log_14) {
  ck_assert_ldouble_eq_tol(s21_log(0.5555555555555555), log(0.5555555555555555),
                           S21_EPS);
}
END_TEST

START_TEST(s21_log_15) {
  ck_assert_ldouble_eq_tol(s21_log(25.978987987879978778),
                           log(25.978987987879978778), S21_EPS);
}
END_TEST

Suite* s21_log_suite_create(void) {
  Suite* suite = suite_create("s21_log");

  TCase* tcase_core = tcase_create("Core of s21_log");

  tcase_add_test(tcase_core, s21_log_1);
  tcase_add_test(tcase_core, s21_log_2);
  tcase_add_test(tcase_core, s21_log_3);
  tcase_add_test(tcase_core, s21_log_4);
  tcase_add_test(tcase_core, s21_log_5);
  tcase_add_test(tcase_core, s21_log_6);
  tcase_add_test(tcase_core, s21_log_7);
  tcase_add_test(tcase_core, s21_log_8);
  tcase_add_test(tcase_core, s21_log_9);
  tcase_add_test(tcase_core, s21_log_10);
  tcase_add_test(tcase_core, s21_log_11);
  tcase_add_test(tcase_core, s21_log_12);
  tcase_add_test(tcase_core, s21_log_13);
  tcase_add_test(tcase_core, s21_log_14);
  tcase_add_test(tcase_core, s21_log_15);

  suite_add_tcase(suite, tcase_core);

  return suite;
}

int test_log(void) {
  /*Создаем структуру и заполняем ее тестами*/
  Suite* suite = s21_log_suite_create();
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