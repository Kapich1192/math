USERNAME= barbreye
BRANCH_NAME= develop
GCC= gcc
FLAGS= -Wall -Werror -Wextra

FILES_C= common/s21_abs.c  common/s21_asin.c common/s21_atan.c common/s21_ceil.c common/s21_cos.c common/s21_exp.c common/s21_fabs.c common/s21_floor.c common/s21_fmod.c common/s21_log.c common/s21_pow.c common/s21_sin.c common/s21_sqrt.c common/s21_tan.c
FILES_C_COMMON = common/s21_factorial.c
FILES_H= s21_math.h

FILES_TESTS_C= tests/s21_math_tests.h tests/main.c tests/s21_abs_tests/s21_abs_tests.c
FT_C_1= tests/s21_abs_tests/s21_abs_tests.c tests/s21_acos_tests/s21_acos_tests.c tests/s21_asin_tests/s21_asin_tests.c
FILES_TESTS_H= ppp

FILES_O= s21_abs.o s21_acos.o s21_asin.o s21_atan.o s21_ceil.o s21_cos.o s21_exp.o s21_fabs.o s21_floor.o s21_fmod.o s21_log.o s21_pow.o s21_sin.o s21_sqrt.o s21_tan.o
SOURCE= -o mmm
FILES_O_TESTS= tests/static/s21_abs.o tests/static/s21_acos.o tests/static/s21_asin.o tests/static/s21_atan.o tests/static/s21_ceil.o tests/static/s21_cos.o tests/static/s21_exp.o tests/static/s21_fabs.o tests/static/s21_floor.o tests/static/s21_fmod.o s21_log.o tests/static/s21_pow.o tests/static/s21_sin.o tests/static/s21_sqrt.o tests/static/s21_tan.o
all: clean s21_math.a

# ======================================= Компиляция тестов ===========================================================
# -pthread -lcheck_pic -pthread -lrt -lm -lsubunit // флаги сообщающие путь к библиотеке check  убунту
test:
	gcc -g -Wall -Werror -Wextra   ${FT_C_1} tests/main.c s21_math.a  -o tests/run_tests -pthread -lcheck_pic -pthread -lrt -lm -lsubunit

test_st: t_s21_abs.o t_s21_acos.o t_s21_asin.o t_s21_atan.o t_s21_ceil.o t_s21_cos.o t_s21_exp.o t_s21_fabs.o t_s21_floor.o t_s21_fmod.o t_s21_log.o t_s21_pow.o t_s21_sin.o t_s21_sqrt.o t_s21_tan.o
	ar rc tests/tests_s21_math.a s21_math_tests.h ${FILES_O_TESTS}
#1
t_s21_abs.o:
	gcc -c ${FLAGS} tests/s21_abs_tests/s21_abs_tests.c -o tests/static/s21_abs_tests.o
#2
t_s21_acos.o:
	gcc -c ${FLAGS} tests/s21_acos_tests/s21_acos_tests.c -o tests/static/s21_acos_tests.o
#3
t_s21_asin.o:
	gcc -c ${FLAGS} common/s21_asin.c
#4
t_s21_atan.o:
	gcc -c ${FLAGS} common/s21_atan.c
#5
t_s21_ceil.o:
	gcc -c ${FLAGS} common/s21_ceil.c
#6
t_s21_cos.o:
	gcc -c ${FLAGS} common/s21_cos.c
#7
t_s21_exp.o:
	gcc -c ${FLAGS} common/s21_exp.c
#8
t_s21_fabs.o:
	gcc -c ${FLAGS} common/s21_fabs.c
#9
t_s21_floor.o:
	gcc -c ${FLAGS} common/s21_floor.c
#10
t_s21_fmod.o:
	gcc -c ${FLAGS} common/s21_fmod.c
#11
t_s21_log.o:
	gcc -c ${FLAGS} common/s21_log.c
#12
t_s21_pow.o:
	gcc -c ${FLAGS} common/s21_pow.c
#13
t_s21_sin.o:
	gcc -c ${FLAGS} common/s21_sin.c
#14
t_s21_sqrt.o:
	gcc -c ${FLAGS} common/s21_sqrt.c
#15
t_s21_tan.o:
	gcc -c ${FLAGS} common/s21_tan.c

# ======================================= Вывод тестов в HTML отчет ===================================================
gcov_report:


# Тесты на утечки
tests_valgrind:

# ======================================= Сборка библиотеки в файл s21_math.a =========================================
s21_math.a: clean.o clean.a s21_abs.o s21_acos.o s21_asin.o s21_atan.o s21_ceil.o s21_cos.o s21_exp.o s21_fabs.o s21_floor.o s21_fmod.o s21_log.o s21_pow.o s21_sin.o s21_sqrt.o s21_tan.o
	ar rc s21_math.a ${FILES_O}
	make clean.o
#1
s21_abs.o:
	gcc -c ${FLAGS} common/s21_abs.c
#2
s21_acos.o:
	gcc -c ${FLAGS} common/s21_acos.c
#3
s21_asin.o:
	gcc -c ${FLAGS} common/s21_asin.c
#4
s21_atan.o:
	gcc -c ${FLAGS} common/s21_atan.c
#5
s21_ceil.o:
	gcc -c ${FLAGS} common/s21_ceil.c
#6
s21_cos.o:
	gcc -c ${FLAGS} common/s21_cos.c
#7
s21_exp.o:
	gcc -c ${FLAGS} common/s21_exp.c
#8
s21_fabs.o:
	gcc -c ${FLAGS} common/s21_fabs.c
#9
s21_floor.o:
	gcc -c ${FLAGS} common/s21_floor.c
#10
s21_fmod.o:
	gcc -c ${FLAGS} common/s21_fmod.c
#11
s21_log.o:
	gcc -c ${FLAGS} common/s21_log.c
#12
s21_pow.o:
	gcc -c ${FLAGS} common/s21_pow.c
#13
s21_sin.o:
	gcc -c ${FLAGS} common/s21_sin.c
#14
s21_sqrt.o:
	gcc -c ${FLAGS} common/s21_sqrt.c
#15
s21_tan.o:
	gcc -c ${FLAGS} common/s21_tan.c

# ======================================= Работа со стилями в проекте =================================================
style:
	clang-format -n ${FILES_H} ${FILES_C} ${FILES_C_COMMON}
style_red:
	clang-format -i ${FILES_H} ${FILES_C} ${FILES_C_COMMON}

# ======================================= Git =========================================================================
git:
	git add .
	git commit -m "${BRANCH_NAME} --> ${USERNAME} --> developing"
	git push origin master
# ======================================= Clean =======================================================================
clean.o:
	rm -rf *.o
clean.a:
	rm -rf *.a
clean:
	rm -rf *.o
	rm -rf *.a
