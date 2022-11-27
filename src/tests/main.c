#include <check.h>
#include <stdio.h>
#include <stdlib.h>
#include "s21_math_tests.h"

int main(void) {
    int temp = 0;
    /*#1 s21_abs*/
    temp = test_abs();
    /*#2 s21_acos*/
    temp = test_acos();
    /*#3 s21_asin*/
    temp = test_asin();

    return temp;
}



