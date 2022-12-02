#include <check.h>
#include <stdio.h>
#include <stdlib.h>

#include "s21_math_tests.h"

int main(void) {
  Suite* cases[] = {
      s21_abs_suite_create(),    //#1
      s21_acos_suite_create(),   //#2
      s21_asin_suite_create(),   //#3
      s21_atan_suite_create(),   //#4
      s21_ceil_suite_create(),   //#5
      s21_cos_suite_create(),    //#6
      s21_exp_suite_create(),    //#7
      s21_fabs_suite_create(),   //#8
      s21_floor_suite_create(),  //#9
      s21_fmod_suite_create(),   //#10
      s21_log_suite_create(),    //#11
      s21_pow_suite_create(),    //#12
      s21_sin_suite_create(),    //#13
      s21_sqrt_suite_create(),   //#14
      s21_tan_suite_create()     //#15
  };

  for (int i = 0; i < 15; ++i) {
    SRunner* runner = srunner_create(cases[i]);
    srunner_run_all(runner, CK_NORMAL);

    int failed_count = srunner_ntests_failed(runner);
    srunner_free(runner);
    if (failed_count != 0) {
      return EXIT_FAILURE;
    }
  }
  return EXIT_SUCCESS;
}
