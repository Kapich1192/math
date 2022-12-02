#include "../s21_math_tests.h"

START_TEST(s21_floor_1) {
  ck_assert_ldouble_eq_tol(s21_floor(-15.123123123), floor(-15.123123123),
                           S21_EPS);
}
END_TEST

START_TEST(s21_floor_2) {
  ck_assert_ldouble_eq_tol(s21_floor(21.123123123), floor(21.123123123),
                           S21_EPS);
}
END_TEST

START_TEST(s21_floor_3) { ck_assert_ldouble_eq(s21_floor(0.1), floor(0.1)); }
END_TEST

START_TEST(s21_floor_4) { ck_assert_ldouble_eq(s21_floor(-0.1), floor(-0.1)); }
END_TEST

START_TEST(s21_floor_5) { ck_assert_ldouble_eq(s21_floor(0.0), floor(0.0)); }
END_TEST

START_TEST(s21_floor_6) { ck_assert_ldouble_eq(s21_floor(-0.9), floor(-0.9)); }
END_TEST

START_TEST(s21_floor_7) { ck_assert_ldouble_eq(s21_floor(0.9), floor(0.9)); }
END_TEST

START_TEST(s21_floor_8) {
  long double n = NAN;
  int f = 0;
  if (s21_isnan(s21_floor(n)) && isnan(floor(n))) f = 1;
  ck_assert_int_eq(1, f);
}
END_TEST

START_TEST(s21_floor_9) {
  ck_assert_ldouble_eq_tol(s21_floor(0.999), floor(0.999), AC);
}
END_TEST

START_TEST(s21_floor_10) {
  ck_assert_ldouble_eq_tol(s21_floor(1.999), floor(1.999), AC);
}
END_TEST

START_TEST(s21_floor_11) {
  ck_assert_ldouble_nan(s21_floor(NAN));
  ck_assert_ldouble_nan(floor(NAN));
}
END_TEST

START_TEST(s21_floor_12) {
  ck_assert_ldouble_eq(s21_floor(999999.987987987987),
                       floor(999999.987987987987));
}
END_TEST

START_TEST(s21_floor_13) {
  ck_assert_ldouble_eq(s21_floor(-999999.987987987987),
                       floor(-999999.987987987987));
}
END_TEST

START_TEST(s21_floor_14) { ck_assert_ldouble_eq(s21_floor(-1.9), floor(-1.9)); }
END_TEST

START_TEST(s21_floor_15) { ck_assert_ldouble_eq(s21_floor(1.9), floor(1.9)); }
END_TEST

Suite* s21_floor_suite_create(void) {
  Suite* suite = suite_create("s21_floor");

  TCase* tcase_core = tcase_create("Core of s21_floor");

  tcase_add_test(tcase_core, s21_floor_1);
  tcase_add_test(tcase_core, s21_floor_2);
  tcase_add_test(tcase_core, s21_floor_3);
  tcase_add_test(tcase_core, s21_floor_4);
  tcase_add_test(tcase_core, s21_floor_5);
  tcase_add_test(tcase_core, s21_floor_6);
  tcase_add_test(tcase_core, s21_floor_7);
  tcase_add_test(tcase_core, s21_floor_8);
  tcase_add_test(tcase_core, s21_floor_9);
  tcase_add_test(tcase_core, s21_floor_10);
  tcase_add_test(tcase_core, s21_floor_11);
  tcase_add_test(tcase_core, s21_floor_12);
  tcase_add_test(tcase_core, s21_floor_13);
  tcase_add_test(tcase_core, s21_floor_14);
  tcase_add_test(tcase_core, s21_floor_15);
  suite_add_tcase(suite, tcase_core);

  return suite;
}

int test_floor(void) {
  /*Создаем структуру и заполняем ее тестами*/
  Suite* suite = s21_floor_suite_create();
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