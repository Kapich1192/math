#include "../s21_math_tests.h"

START_TEST(s21_atan_1) {
  long double test_val = 1;
  ck_assert_ldouble_eq_tol(s21_atan(test_val), atan(test_val), AC);
}
END_TEST

START_TEST(s21_atan_2) {
  long double test_val = -1;
  ck_assert_ldouble_eq_tol(s21_atan(test_val), atan(test_val), AC);
}
END_TEST

START_TEST(s21_atan_3) {
  long double test_val = S21_NAN;
  ck_assert_ldouble_nan(s21_atan(test_val));
  ck_assert_ldouble_nan(atan(test_val));
}
END_TEST

START_TEST(s21_atan_4) {
  long double test_val = S21_INFINITY;
  ck_assert_ldouble_eq_tol(s21_atan(test_val), atan(test_val), AC);
}
END_TEST

START_TEST(s21_atan_5) {
  long double test_val = -S21_INFINITY;
  ck_assert_ldouble_eq_tol(s21_atan(test_val), atan(test_val), AC);
}
END_TEST

START_TEST(s21_atan_6) {
  long double test_val = -S21_NAN;
  ck_assert_ldouble_nan(s21_atan(test_val));
  ck_assert_ldouble_nan(atan(test_val));
}
END_TEST

START_TEST(s21_atan_7) {
  long double test_val = S21_PI;
  ck_assert_ldouble_eq_tol(s21_atan(test_val), atan(test_val), AC);
}
END_TEST

START_TEST(s21_atan_8) {
  long double test_val = -S21_PI;
  ck_assert_ldouble_eq_tol(s21_atan(test_val), atan(test_val), AC);
}
END_TEST

START_TEST(s21_atan_9) {
  long double test_val = 0.789789;
  ck_assert_ldouble_eq_tol(s21_atan(test_val), atan(test_val), AC);
}
END_TEST

START_TEST(s21_atan_10) {
  long double test_val = -0.789789;
  ck_assert_ldouble_eq_tol(s21_atan(test_val), atan(test_val), AC);
}
END_TEST

START_TEST(s21_atan_11) {
  long double test_val = 0;
  ck_assert_ldouble_eq_tol(s21_atan(test_val), atan(test_val), AC);
}
END_TEST

START_TEST(s21_atan_12) {
  long double test_val = S21_PI / 5;
  ck_assert_ldouble_eq_tol(s21_atan(test_val), atan(test_val), AC);
}
END_TEST

START_TEST(s21_atan_13) {
  long double test_val = -S21_PI / 5;
  ck_assert_ldouble_eq_tol(s21_atan(test_val), atan(test_val), AC);
}
END_TEST

START_TEST(s21_atan_14) {
  long double test_val = S21_PI / 2;
  ck_assert_ldouble_eq_tol(s21_atan(test_val), atan(test_val), AC);
}
END_TEST

START_TEST(s21_atan_15) {
  long double test_val = -S21_PI / 2;
  ck_assert_ldouble_eq_tol(s21_atan(test_val), atan(test_val), AC);
}
END_TEST

START_TEST(s21_atan_16) {
  long double test_val = S21_PI / 6;
  ck_assert_ldouble_eq_tol(s21_atan(test_val), atan(test_val), AC);
}
END_TEST

START_TEST(s21_atan_17) {
  long double test_val = -S21_PI / 6;
  ck_assert_ldouble_eq_tol(s21_atan(test_val), atan(test_val), AC);
}
END_TEST

START_TEST(s21_atan_18) {
  long double test_val = S21_PI / 2;
  ck_assert_ldouble_eq_tol(s21_atan(test_val), atan(test_val), AC);
}
END_TEST

START_TEST(s21_atan_19) {
  long double test_val = -S21_PI / 2;
  ck_assert_ldouble_eq_tol(s21_atan(test_val), atan(test_val), AC);
}
END_TEST

START_TEST(s21_atan_20) {
  long double test_val = 2 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_atan(test_val), atan(test_val), AC);
}
END_TEST

START_TEST(s21_atan_21) {
  for (int i = 0; i < 5; ++i) {
    long double test_val = i * S21_PI;
    ck_assert_ldouble_eq_tol(s21_atan(test_val), atan(test_val), AC);
    long double test_val_m = -i * S21_PI;
    ck_assert_ldouble_eq_tol(s21_atan(test_val_m), atan(test_val_m), AC);
  }
}
END_TEST

Suite* s21_atan_suite_create(void) {
  Suite* suite = suite_create("s21_atan");

  TCase* tcase_core = tcase_create("Core of s21_atan");

  tcase_add_test(tcase_core, s21_atan_1);
  tcase_add_test(tcase_core, s21_atan_2);
  tcase_add_test(tcase_core, s21_atan_3);
  tcase_add_test(tcase_core, s21_atan_4);
  tcase_add_test(tcase_core, s21_atan_5);
  tcase_add_test(tcase_core, s21_atan_6);
  tcase_add_test(tcase_core, s21_atan_7);
  tcase_add_test(tcase_core, s21_atan_8);
  tcase_add_test(tcase_core, s21_atan_9);
  tcase_add_test(tcase_core, s21_atan_10);
  tcase_add_test(tcase_core, s21_atan_11);
  tcase_add_test(tcase_core, s21_atan_12);
  tcase_add_test(tcase_core, s21_atan_13);
  tcase_add_test(tcase_core, s21_atan_14);
  tcase_add_test(tcase_core, s21_atan_15);
  tcase_add_test(tcase_core, s21_atan_16);
  tcase_add_test(tcase_core, s21_atan_17);
  tcase_add_test(tcase_core, s21_atan_18);
  tcase_add_test(tcase_core, s21_atan_19);
  tcase_add_test(tcase_core, s21_atan_20);
  tcase_add_test(tcase_core, s21_atan_21);

  suite_add_tcase(suite, tcase_core);

  return suite;
}

int test_atan(void) {
  /*Создаем структуру и заполняем ее тестами*/
  Suite* suite = s21_atan_suite_create();
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