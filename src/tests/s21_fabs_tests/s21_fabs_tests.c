#include "../s21_math_tests.h"

START_TEST(s21_fabs_1) {
  ck_assert_ldouble_eq(s21_fabs(15.123123123123123), fabs(15.123123123123123));
}
END_TEST

START_TEST(s21_fabs_2) {
  ck_assert_ldouble_eq(s21_fabs(21.123123123123123), fabs(21.123123123123123));
}
END_TEST

START_TEST(s21_fabs_3) {
  ck_assert_ldouble_eq(s21_fabs(-21.123123123123123),
                       fabs(-21.123123123123123));
}
END_TEST

START_TEST(s21_fabs_4) {
  ck_assert_ldouble_eq(s21_fabs(-15.123123123123123),
                       fabs(-15.123123123123123));
}
END_TEST

START_TEST(s21_fabs_5) {
  ck_assert_ldouble_eq(s21_fabs(-9519359135915.53151413431),
                       fabs(-9519359135915.53151413431));
}
END_TEST

START_TEST(s21_fabs_6) {
  ck_assert_ldouble_eq(s21_fabs(INFINITY), fabs(INFINITY));
}
END_TEST

START_TEST(s21_fabs_7) {
  ck_assert_ldouble_eq(s21_fabs(-INFINITY), fabs(-INFINITY));
}
END_TEST

START_TEST(s21_fabs_8) {
  double temp = NAN;
  int f = 0;
  if (s21_isnan(s21_fabs(temp)) && isnan(fabs(temp))) f = 1;
  ck_assert_int_eq(1, f);
}
END_TEST

START_TEST(s21_fabs_9) {
  ck_assert_ldouble_eq(s21_fabs(-23456.23465642365), fabs(-23456.23465642365));
}
END_TEST

START_TEST(s21_fabs_10) { ck_assert_ldouble_eq(s21_fabs(0.0), fabs(0.0)); }
END_TEST

START_TEST(s21_fabs_11) {
  ck_assert_ldouble_eq(s21_fabs(0.000001), fabs(0.000001));
}
END_TEST

START_TEST(s21_fabs_12) {
  ck_assert_ldouble_eq(s21_fabs(-0.000001), fabs(-0.000001));
}
END_TEST

START_TEST(s21_fabs_13) {
  ck_assert_ldouble_eq(s21_fabs(-2456245611.156156156),
                       fabs(-2456245611.156156156));
}
END_TEST

START_TEST(s21_fabs_14) {
  ck_assert_ldouble_eq(s21_fabs(2456245611.156156156),
                       fabs(2456245611.156156156));
}
END_TEST

START_TEST(s21_fabs_15) {
  ck_assert_ldouble_eq(s21_fabs(-2456245611.156156156),
                       fabs(2456245611.156156156));
}
END_TEST

Suite* s21_fabs_suite_create(void) {
  Suite* suite = suite_create("s21_fabs");

  TCase* tcase_core = tcase_create("Core of s21_fabs");

  tcase_add_test(tcase_core, s21_fabs_1);
  tcase_add_test(tcase_core, s21_fabs_2);
  tcase_add_test(tcase_core, s21_fabs_3);
  tcase_add_test(tcase_core, s21_fabs_4);
  tcase_add_test(tcase_core, s21_fabs_5);
  tcase_add_test(tcase_core, s21_fabs_6);
  tcase_add_test(tcase_core, s21_fabs_7);
  tcase_add_test(tcase_core, s21_fabs_8);
  tcase_add_test(tcase_core, s21_fabs_9);
  tcase_add_test(tcase_core, s21_fabs_10);
  tcase_add_test(tcase_core, s21_fabs_11);
  tcase_add_test(tcase_core, s21_fabs_12);
  tcase_add_test(tcase_core, s21_fabs_13);
  tcase_add_test(tcase_core, s21_fabs_14);
  tcase_add_test(tcase_core, s21_fabs_15);
  suite_add_tcase(suite, tcase_core);

  return suite;
}

int test_fabs(void) {
  /*Создаем структуру и заполняем ее тестами*/
  Suite* suite = s21_fabs_suite_create();
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