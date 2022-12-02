#include "../s21_math_tests.h"

START_TEST(s21_pow_1) {
  double base = 98897987;
  double exp = 0;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_2) {
  double base = 7;
  double exp = 5.3;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_3) {
  double base = S21_INFINITY;
  double exp = -5;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_4) {
  double base = 3;
  double exp = 5.526;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_5) {
  double base = S21_INFINITY;
  double exp = -5.526;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_6) {
  double base = 8;
  double exp = 1;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_7) {
  double base = 1;
  double exp = S21_INFINITY;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_8) {
  double base = 0;
  double exp = S21_INFINITY;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_9) {
  double base = 1;
  double exp = S21_INFINITY;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_10) {
  double base = 2;
  double exp = 2.1234;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_11) {
  double base = 2.1526165;
  double exp = 2.321;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_12) {
  double base = -2.1526165;
  double exp = 0.9;
  ck_assert_ldouble_nan(s21_pow(base, exp));
  ck_assert_ldouble_nan(pow(base, exp));
}
END_TEST

START_TEST(s21_pow_13) {
  double base = -1;
  double exp = S21_INFINITY;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_14) {
  double base = S21_NAN;
  double exp = 0;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_15) {
  double base = S21_NAN;
  double exp = 5;
  ck_assert_ldouble_nan(s21_pow(base, exp));
  ck_assert_ldouble_nan(pow(base, exp));
}
END_TEST

START_TEST(s21_pow_16) {
  double base = S21_NAN;
  double exp = -5;
  ck_assert_ldouble_nan(s21_pow(base, exp));
  ck_assert_ldouble_nan(pow(base, exp));
}
END_TEST

START_TEST(s21_pow_17) {
  double base = S21_NAN;
  double exp = 5.526;
  ck_assert_ldouble_nan(s21_pow(base, exp));
  ck_assert_ldouble_nan(pow(base, exp));
}
END_TEST

START_TEST(s21_pow_18) {
  double base = S21_NAN;
  double exp = -5.526;
  ck_assert_ldouble_nan(s21_pow(base, exp));
  ck_assert_ldouble_nan(pow(base, exp));
}
END_TEST

START_TEST(s21_pow_19) {
  double base = S21_NAN;
  double exp = 1;
  ck_assert_ldouble_nan(s21_pow(base, exp));
  ck_assert_ldouble_nan(pow(base, exp));
}
END_TEST

START_TEST(s21_pow_20) {
  double base = S21_NAN;
  double exp = S21_NAN;
  ck_assert_ldouble_nan(s21_pow(base, exp));
  ck_assert_ldouble_nan(pow(base, exp));
}
END_TEST

START_TEST(s21_pow_21) {
  double base = 0;
  double exp = S21_NAN;
  ck_assert_ldouble_nan(s21_pow(base, exp));
  ck_assert_ldouble_nan(pow(base, exp));
}
END_TEST

START_TEST(s21_pow_22) {
  double base = 1;
  double exp = S21_NAN;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_23) {
  double base = 2;
  double exp = S21_NAN;
  ck_assert_ldouble_nan(s21_pow(base, exp));
  ck_assert_ldouble_nan(pow(base, exp));
}
END_TEST

START_TEST(s21_pow_24) {
  double base = 2.1526165;
  double exp = S21_NAN;
  ck_assert_ldouble_nan(s21_pow(base, exp));
  ck_assert_ldouble_nan(pow(base, exp));
}
END_TEST

START_TEST(s21_pow_25) {
  double base = -2.1526165;
  double exp = S21_NAN;
  ck_assert_ldouble_nan(s21_pow(base, exp));
  ck_assert_ldouble_nan(pow(base, exp));
}
END_TEST

START_TEST(s21_pow_26) {
  double base = -1;
  double exp = S21_NAN;
  ck_assert_ldouble_nan(s21_pow(base, exp));
  ck_assert_ldouble_nan(pow(base, exp));
}
END_TEST

START_TEST(s21_pow_27) {
  long double base = 5;
  long double exp = -12;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_28) {
  long double base = 5;
  long double exp = -12.678968;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_29) {
  long double base = 5.4577;
  long double exp = -12;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_30) {
  long double base = 1;
  long double exp = -12.4567474;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_31) {
  long double base = S21_NAN;
  long double exp = -12;
  ck_assert_ldouble_nan(s21_pow(base, exp));
  ck_assert_ldouble_nan(pow(base, exp));
}
END_TEST

START_TEST(s21_pow_32) {
  long double base = S21_INFINITY;
  long double exp = -12;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_33) {
  long double base = S21_INFINITY;
  long double exp = -12.3456435;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_34) {
  long double base = S21_NAN;
  long double exp = -12.6546466;
  ck_assert_ldouble_nan(s21_pow(base, exp));
  ck_assert_ldouble_nan(pow(base, exp));
}
END_TEST

START_TEST(s21_pow_35) {
  long double base = 0.9;
  long double exp = -5.1434;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_36) {
  long double base = 5.35636;
  long double exp = -12.5634563;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_37) {
  long double base = -5.35;
  long double exp = 5;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
}
END_TEST

START_TEST(s21_pow_38) {
  long double base = -5;
  long double exp = 12.5634563;
  ck_assert_ldouble_nan(s21_pow(base, exp));
  ck_assert_ldouble_nan(pow(base, exp));
}
END_TEST

START_TEST(s21_pow_39) {
  long double base = -5;
  long double exp = -3.5634563;
  ck_assert_ldouble_nan(s21_pow(base, exp));
  ck_assert_ldouble_nan(pow(base, exp));
}
END_TEST

START_TEST(s21_pow_40) {
  long double base = -5.35636;
  long double exp = 21.563;
  ck_assert_ldouble_nan(s21_pow(base, exp));
  ck_assert_ldouble_nan(pow(base, exp));
}
END_TEST

START_TEST(s21_pow_41) {
  long double base = -5.3;
  long double exp = 7.56;
  ck_assert_ldouble_nan(s21_pow(base, exp));
  ck_assert_ldouble_nan(pow(base, exp));
}
END_TEST

START_TEST(s21_pow_42) {
  long double base = 0;
  long double exp = 1;
  while (base < 10) {
    base += 1;
    exp += 0.1;
    ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
  }
}
END_TEST

START_TEST(s21_pow_43) {
  long double base = 10;
  long double exp = 3;
  while (base < 10) {
    base += 1;
    exp += 0.1;
    ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
  }
}
END_TEST

START_TEST(s21_pow_44) {
  long double base = 30;
  long double exp = 4;
  while (base < 10) {
    base += 1;
    exp += 0.1;
    ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), AC);
  }
}
END_TEST

Suite* s21_pow_suite_create(void) {
  Suite* suite = suite_create("s21_pow");

  TCase* tcase_core = tcase_create("Core of s21_pow");

  tcase_add_test(tcase_core, s21_pow_1);
  tcase_add_test(tcase_core, s21_pow_2);
  tcase_add_test(tcase_core, s21_pow_3);
  tcase_add_test(tcase_core, s21_pow_4);
  tcase_add_test(tcase_core, s21_pow_5);
  tcase_add_test(tcase_core, s21_pow_6);
  tcase_add_test(tcase_core, s21_pow_7);
  tcase_add_test(tcase_core, s21_pow_8);
  tcase_add_test(tcase_core, s21_pow_9);
  tcase_add_test(tcase_core, s21_pow_10);
  tcase_add_test(tcase_core, s21_pow_11);
  tcase_add_test(tcase_core, s21_pow_12);
  tcase_add_test(tcase_core, s21_pow_13);
  tcase_add_test(tcase_core, s21_pow_14);
  tcase_add_test(tcase_core, s21_pow_15);
  tcase_add_test(tcase_core, s21_pow_16);
  tcase_add_test(tcase_core, s21_pow_17);
  tcase_add_test(tcase_core, s21_pow_18);
  tcase_add_test(tcase_core, s21_pow_19);
  tcase_add_test(tcase_core, s21_pow_20);
  tcase_add_test(tcase_core, s21_pow_21);
  tcase_add_test(tcase_core, s21_pow_22);
  tcase_add_test(tcase_core, s21_pow_23);
  tcase_add_test(tcase_core, s21_pow_24);
  tcase_add_test(tcase_core, s21_pow_25);
  tcase_add_test(tcase_core, s21_pow_26);
  tcase_add_test(tcase_core, s21_pow_27);
  tcase_add_test(tcase_core, s21_pow_28);
  tcase_add_test(tcase_core, s21_pow_29);
  tcase_add_test(tcase_core, s21_pow_30);
  tcase_add_test(tcase_core, s21_pow_31);
  tcase_add_test(tcase_core, s21_pow_32);
  tcase_add_test(tcase_core, s21_pow_33);
  tcase_add_test(tcase_core, s21_pow_34);
  tcase_add_test(tcase_core, s21_pow_35);
  tcase_add_test(tcase_core, s21_pow_36);
  tcase_add_test(tcase_core, s21_pow_37);
  tcase_add_test(tcase_core, s21_pow_38);
  tcase_add_test(tcase_core, s21_pow_39);
  tcase_add_test(tcase_core, s21_pow_40);
  tcase_add_test(tcase_core, s21_pow_41);
  tcase_add_test(tcase_core, s21_pow_42);
  tcase_add_test(tcase_core, s21_pow_43);
  tcase_add_test(tcase_core, s21_pow_44);

  suite_add_tcase(suite, tcase_core);

  return suite;
}

int test_pow(void) {
  /*Создаем структуру и заполняем ее тестами*/
  Suite* suite = s21_pow_suite_create();
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