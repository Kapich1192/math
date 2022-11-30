#include "../s21_math.h"
/*
 * #10
 * остаток операции деления с плавающей точкой
 * */
long double s21_fmod(double base, double exp) {
  int marker = 1;
  if (base < 0) marker = -1;
  long double result = base + exp;
  if (s21_isnan(exp)) {
    result = S21_NAN;
  } else if (s21_isnan(base)) {
    result = S21_NAN;
  } else if (exp < S21_EPS && exp >= 0) {
    result = S21_NAN;
  } else if (base < S21_EPS && base >= 0) {
    result = 0;
  } else if (s21_isinf(base)) {
    result = S21_NAN;
  } else if (s21_isinf(exp)) {
    result = base;
  } else {
    base = s21_fabs(base);
    exp = s21_fabs(exp);
    while (base > 0) {
      base -= exp;
    }
    result = base + exp;
    result *= marker;
  }
  return result;
}