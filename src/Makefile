USERNAME= barbreye
BRANCH_NAME= develop
GCC= gcc
FLAGS= -Wall -Werror -Wextra

FILES_C= common/s21_abs.c  common/s21_asin.c common/s21_atan.c common/s21_ceil.c common/s21_cos.c common/s21_exp.c common/s21_fabs.c common/s21_floor.c common/s21_fmod.c common/s21_log.c common/s21_pow.c common/s21_sin.c common/s21_sqrt.c common/s21_tan.c
FILES_C_COMMON = common/s21_factorial.c
FILES_H= s21_math.h

FILES_TESTS_C= tests/main.c
FILES_TESTS_H= ppp

SOURCE= -o mmm

all:

s21_math.a:

test:
	${GCC}  ${FILES_C} ${FILES_C_COMMON} ${FILES_H} tests.c -o testttt
gcov_report:

clean:

tests_valgrind:

style:
	clang-format -n ${FILES_H} ${FILES_C} ${FILES_C_COMMON}
style_red:
	clang-format -i ${FILES_H} ${FILES_C} ${FILES_C_COMMON}
git:
	git add .
	git commit -m "${BRANCH_NAME} --> ${USERNAME} --> developing"
	git push origin master

