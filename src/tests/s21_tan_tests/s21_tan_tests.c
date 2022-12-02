#include "../s21_math_tests.h"

START_TEST(s21_tan_1) {
  long double test_val = 1;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

START_TEST(s21_tan_2) {
  long double test_val = -1;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

START_TEST(s21_tan_3) {
  long double test_val = S21_NAN;
  ck_assert_ldouble_nan(s21_tan(test_val));
  ck_assert_ldouble_nan(tan(test_val));
}
END_TEST

START_TEST(s21_tan_4) {
  long double test_val = S21_INFINITY;
  ck_assert_ldouble_nan(s21_tan(test_val));
  ck_assert_ldouble_nan(tan(test_val));
}
END_TEST

START_TEST(s21_tan_5) {
  long double test_val = -S21_INFINITY;
  ck_assert_ldouble_nan(s21_tan(test_val));
  ck_assert_ldouble_nan(tan(test_val));
}
END_TEST

START_TEST(s21_tan_6) {
  long double test_val = -S21_NAN;
  ck_assert_ldouble_nan(s21_tan(test_val));
  ck_assert_ldouble_nan(tan(test_val));
}
END_TEST

START_TEST(s21_tan_7) {
  long double test_val = S21_PI;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

START_TEST(s21_tan_8) {
  long double test_val = -S21_PI;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

START_TEST(s21_tan_9) {
  long double test_val = 0.789789;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

START_TEST(s21_tan_10) {
  long double test_val = -0.789789;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

START_TEST(s21_tan_11) {
  long double test_val = 0;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

START_TEST(s21_tan_12) {
  long double test_val = S21_PI / 5;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

START_TEST(s21_tan_13) {
  long double test_val = -S21_PI / 5;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

START_TEST(s21_tan_14) {
  long double test_val = S21_PI / 2;
  ck_assert_ldouble_eq(s21_tan(test_val), tan(test_val));
}
END_TEST

START_TEST(s21_tan_15) {
  long double test_val = -S21_PI / 2;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), S21_EPS);
}
END_TEST

START_TEST(s21_tan_16) {
  long double test_val = S21_PI / 6;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

START_TEST(s21_tan_17) {
  long double test_val = -S21_PI / 6;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

START_TEST(s21_tan_18) {
  long double test_val = S21_PI / 2;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

START_TEST(s21_tan_19) {
  long double test_val = -S21_PI / 2;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

START_TEST(s21_tan_20) {
  long double test_val = 2 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

START_TEST(s21_tan_21) {
  for (int i = 0; i < 5; ++i) {
    long double test_val = i * S21_PI;
    ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
    long double test_val_m = -i * S21_PI;
    ck_assert_ldouble_eq_tol(s21_tan(test_val_m), tan(test_val_m), AC);
  }
}
END_TEST

Suite* s21_tan_suite_create(void) {
  Suite* suite = suite_create("s21_tan");

  TCase* tcase_core = tcase_create("Core of s21_tan");

  tcase_add_test(tcase_core, s21_tan_1);
  tcase_add_test(tcase_core, s21_tan_2);
  tcase_add_test(tcase_core, s21_tan_3);
  tcase_add_test(tcase_core, s21_tan_4);
  tcase_add_test(tcase_core, s21_tan_5);
  tcase_add_test(tcase_core, s21_tan_6);
  tcase_add_test(tcase_core, s21_tan_7);
  tcase_add_test(tcase_core, s21_tan_8);
  tcase_add_test(tcase_core, s21_tan_9);
  tcase_add_test(tcase_core, s21_tan_10);
  tcase_add_test(tcase_core, s21_tan_11);
  tcase_add_test(tcase_core, s21_tan_12);
  tcase_add_test(tcase_core, s21_tan_13);
  tcase_add_test(tcase_core, s21_tan_14);
  tcase_add_test(tcase_core, s21_tan_15);
  tcase_add_test(tcase_core, s21_tan_16);
  tcase_add_test(tcase_core, s21_tan_17);
  tcase_add_test(tcase_core, s21_tan_18);
  tcase_add_test(tcase_core, s21_tan_19);
  tcase_add_test(tcase_core, s21_tan_20);
  tcase_add_test(tcase_core, s21_tan_21);

  suite_add_tcase(suite, tcase_core);

  return suite;
}

int test_tan(void) {
  /*Создаем структуру и заполняем ее тестами*/
  Suite* suite = s21_tan_suite_create();
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