#include "../s21_math_tests.h"

START_TEST(s21_fmod_1) {
  ck_assert_ldouble_eq_tol(s21_fmod(7.3, 2.9), fmod(7.3, 2.9), S21_EPS);
}
END_TEST

START_TEST(s21_fmod_2) {
  ck_assert_ldouble_eq_tol(s21_fmod(15.5, 2.2), fmod(15.5, 2.2), S21_EPS);
}
END_TEST

START_TEST(s21_fmod_3) {
    ck_assert_ldouble_eq_tol(s21_fmod(21, 5), fmod(21, 5), S21_EPS);
}
END_TEST

START_TEST(s21_fmod_4) {
    ck_assert_ldouble_eq_tol(s21_fmod(-21,5),fmod(-21,5),S21_EPS);
} END_TEST

START_TEST(s21_fmod_5) {
    ck_assert_ldouble_eq_tol(s21_fmod(15.5,-5),fmod(15.5,-5),S21_EPS);
} END_TEST

START_TEST(s21_fmod_6) {
    ck_assert_ldouble_eq_tol(s21_fmod(-15.5,-5),fmod(-15.5,-5),S21_EPS);
} END_TEST

START_TEST(s21_fmod_7){
    ck_assert_ldouble_eq_tol(s21_fmod(-15.5,-2.2), fmod(-15.5,-2.2),S21_EPS);
}END_TEST

START_TEST(s21_fmod_8) {
    ck_assert_ldouble_eq_tol(s21_fmod(-15.4584584547949546,2.549849898494), fmod(-15.4584584547949546,2.549849898494),S21_EPS);

} END_TEST

START_TEST(s21_fmod_9) {
    ck_assert_ldouble_nan(s21_fmod(-15.4584584547949546,S21_NAN));
    ck_assert_ldouble_nan(fmod(-15.4584584547949546,S21_NAN));
} END_TEST

START_TEST(s21_fmod_10) {
    ck_assert_ldouble_nan(s21_fmod(S21_NAN,S21_NAN));
    ck_assert_ldouble_nan(fmod(S21_NAN,S21_NAN));
} END_TEST

START_TEST(s21_fmod_11) {
    ck_assert_ldouble_nan(s21_fmod(NAN,2.549849898494));
    ck_assert_ldouble_nan(fmod(NAN,2.549849898494));
} END_TEST

START_TEST(s21_fmod_12) {
    ck_assert_ldouble_eq_tol(s21_fmod(2.549849898494,S21_INFINITY),fmod(2.549849898494,S21_INFINITY),S21_EPS);
} END_TEST

START_TEST(s21_fmod_13) {
    ck_assert_ldouble_nan(s21_fmod(S21_INFINITY, 2.549849898494));
    ck_assert_ldouble_nan(fmod(S21_INFINITY, 2.549849898494));
} END_TEST

START_TEST(s21_fmod_14) {
    ck_assert_ldouble_nan(s21_fmod(S21_INFINITY, S21_INFINITY));
    ck_assert_ldouble_nan(fmod(S21_INFINITY, S21_INFINITY));
}END_TEST

START_TEST(s21_fmod_15) {
    ck_assert_ldouble_eq_tol(s21_fmod(-15.4584584547949546,-2.549849898494), fmod(-15.4584584547949546,-2.549849898494),S21_EPS);
} END_TEST

Suite* s21_fmod_suite_create(void) {
  Suite* suite = suite_create("s21_fmod");

  TCase* tcase_core = tcase_create("Core of s21_fmod");

  tcase_add_test(tcase_core, s21_fmod_1);
  tcase_add_test(tcase_core, s21_fmod_2);
    tcase_add_test(tcase_core, s21_fmod_3);
    tcase_add_test(tcase_core, s21_fmod_4);
    tcase_add_test(tcase_core, s21_fmod_5);
    tcase_add_test(tcase_core, s21_fmod_6);
    tcase_add_test(tcase_core, s21_fmod_7);
    tcase_add_test(tcase_core, s21_fmod_8);
    tcase_add_test(tcase_core, s21_fmod_9);
    tcase_add_test(tcase_core, s21_fmod_10);
    tcase_add_test(tcase_core, s21_fmod_11);
    tcase_add_test(tcase_core, s21_fmod_12);
    tcase_add_test(tcase_core, s21_fmod_13);
    tcase_add_test(tcase_core, s21_fmod_14);
    tcase_add_test(tcase_core, s21_fmod_15);
  suite_add_tcase(suite, tcase_core);

  return suite;
}

int test_fmod(void) {
  /*Создаем структуру и заполняем ее тестами*/
  Suite* suite = s21_fmod_suite_create();
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