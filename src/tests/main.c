#include <check.h>
#include <stdio.h>
#include <stdlib.h>
#include "s21_math_tests.h"

int main(void) {
    int temp = 0;
    /*#1 s21_abs*/
    temp = test_abs();
    if(temp != 0)
        return temp;
    /*#2*/
    return temp;
}



