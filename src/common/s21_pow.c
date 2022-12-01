#include "../s21_math.h"
typedef struct power {
  long int num;
  long int znam;
} P;

long double s21_pow_exp_int(double base, int exp);
P* p_converter(double exp);
/*
 * #12
 * возводит число в заданную степень
 * */
long double s21_pow(double base, double exp) {
  long double result = base;
  if (exp - (long double)((long int)exp) > 0 &&
      exp - (long double)((long int)exp) < S21_EPS) {
    result = s21_pow_exp_int(base, exp);
  } else {
  }
  return result;
}

long double s21_pow_exp_int(double base, int exp) {
  long double result = base;
  if (exp == 0)
    result = 1;
  else if (exp == 1) {
    result = base;
  } else {
    while (exp > 1) {
      base = base * base;
      exp--;
    }
    result = base;
  }
  return result;
}
