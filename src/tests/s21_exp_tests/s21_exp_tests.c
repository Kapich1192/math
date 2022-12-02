#include "../s21_math_tests.h"

START_TEST(s21_exp_1) { ck_assert_ldouble_eq_tol(s21_exp(1), exp(1), S21_EPS); }
END_TEST

START_TEST(s21_exp_2) {
  ck_assert_ldouble_eq_tol(s21_exp(15), exp(15), S21_EPS);
}
END_TEST

START_TEST(s21_exp_3) {
  ck_assert_ldouble_eq_tol(s21_exp(0.2544576373), exp(0.2544576373), S21_EPS);
}
END_TEST

START_TEST(s21_exp_4) {
  ck_assert_ldouble_eq_tol(s21_exp(-6), exp(-6), S21_EPS);
}
END_TEST

START_TEST(s21_exp_5) {
  ck_assert_ldouble_eq_tol(s21_exp(-1), exp(-1), S21_EPS);
}
END_TEST

START_TEST(s21_exp_6) { ck_assert_ldouble_eq_tol(s21_exp(0), exp(0), S21_EPS); }
END_TEST

START_TEST(s21_exp_7) {
  ck_assert_ldouble_nan(s21_exp(S21_NAN));
  ck_assert_ldouble_nan(exp(S21_NAN));
}
END_TEST

START_TEST(s21_exp_8) {
  ck_assert_ldouble_eq_tol(s21_exp(-7), exp(-7), S21_EPS);
}
END_TEST

START_TEST(s21_exp_9) {
  ck_assert_ldouble_eq_tol(s21_exp(-18), exp(-18), S21_EPS);
}
END_TEST

START_TEST(s21_exp_10) {
  ck_assert_ldouble_eq_tol(s21_exp(21), exp(21), S21_EPS);
}
END_TEST

START_TEST(s21_exp_11) {
  ck_assert_ldouble_eq_tol(s21_exp(1.156156), exp(1.156156), S21_EPS);
}
END_TEST

START_TEST(s21_exp_12) {
  ck_assert_ldouble_eq_tol(s21_exp(-1.156156), exp(-1.156156), S21_EPS);
}
END_TEST

START_TEST(s21_exp_13) {
  ck_assert_ldouble_eq_tol(s21_exp(-0.2544576373), exp(-0.2544576373), S21_EPS);
}
END_TEST

START_TEST(s21_exp_14) {
  ck_assert_ldouble_eq_tol(s21_exp(0.5555555555555555), exp(0.5555555555555555),
                           S21_EPS);
}
END_TEST

START_TEST(s21_exp_15) {
  ck_assert_ldouble_eq_tol(s21_exp(-0.5555555555555555),
                           exp(-0.5555555555555555), S21_EPS);
}
END_TEST

Suite* s21_exp_suite_create(void) {
  Suite* suite = suite_create("s21_exp");

  TCase* tcase_core = tcase_create("Core of s21_exp");

  tcase_add_test(tcase_core, s21_exp_1);
  tcase_add_test(tcase_core, s21_exp_2);
  tcase_add_test(tcase_core, s21_exp_3);
  tcase_add_test(tcase_core, s21_exp_4);
  tcase_add_test(tcase_core, s21_exp_5);
  tcase_add_test(tcase_core, s21_exp_6);
  tcase_add_test(tcase_core, s21_exp_7);
  tcase_add_test(tcase_core, s21_exp_8);
  tcase_add_test(tcase_core, s21_exp_9);
  tcase_add_test(tcase_core, s21_exp_10);
  tcase_add_test(tcase_core, s21_exp_11);
  tcase_add_test(tcase_core, s21_exp_12);
  tcase_add_test(tcase_core, s21_exp_13);
  tcase_add_test(tcase_core, s21_exp_14);
  tcase_add_test(tcase_core, s21_exp_15);

  suite_add_tcase(suite, tcase_core);

  return suite;
}

int test_exp(void) {
  /*Создаем структуру и заполняем ее тестами*/
  Suite* suite = s21_exp_suite_create();
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