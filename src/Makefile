#персонализация
USERNAME= barbreye
EMAIL= barbrey@student.21-school.ru
BRANCH_NAME= develop
#Флаги
GCC= gcc
GCCG= gcc -g
FLAGS= -Wall -Werror -Wextra
TESTS_UBUNTU= -pthread -lcheck_pic -pthread -lrt -lm -lsubunit
#файлы проекта
FILES_C= common/s21_abs.c  common/s21_asin.c common/s21_atan.c common/s21_ceil.c common/s21_cos.c common/s21_exp.c common/s21_fabs.c common/s21_floor.c common/s21_fmod.c common/s21_log.c common/s21_pow.c common/s21_sin.c common/s21_sqrt.c common/s21_tan.c
FILES_C_COMMON = common/s21_factorial.c
FILES_H= s21_math.h
#Объектные файлы для создания статической библиотеки math.h
FILES_O= s21_abs.o s21_acos.o s21_asin.o s21_atan.o s21_ceil.o s21_cos.o s21_exp.o s21_fabs.o s21_floor.o s21_fmod.o s21_log.o s21_pow.o s21_sin.o s21_sqrt.o s21_tan.o
#файлы тестов
FILES_TESTS_C= tests/s21_math_tests.h tests/main.c tests/s21_abs_tests/s21_abs_tests.c
FT_C_1= tests/s21_abs_tests/s21_abs_tests.c tests/s21_acos_tests/s21_acos_tests.c tests/s21_asin_tests/s21_asin_tests.c
FT_C_2= tests/s21_atan_tests/s21_atan_tests.c tests/s21_ceil_tests/s21_ceil_tests.c tests/s21_cos_tests/s21_cos_tests.c
FT_C_3= tests/s21_exp_tests/s21_exp_tests.c tests/s21_fabs_tests/s21_fabs_tests.c tests/s21_floor_tests/s21_floor_tests.c
FT_C_4= tests/s21_fmod_tests/s21_fmod_tests.c tests/s21_log_tests/s21_log_tests.c tests/s21_pow_tests/s21_pow_tests.c
FT_C_5= tests/s21_sin_tests/s21_sin_tests.c tests/s21_sqrt_tests/s21_sqrt_tests.c tests/s21_tan_tests/s21_tan_tests.c


SOURCE= -o mmm

all: clean s21_math.a test

# ======================================= Компиляция тестов ===========================================================
# -pthread -lcheck_pic -pthread -lrt -lm -lsubunit // флаги сообщающие путь к библиотеке check  убунту
test:
	${GCCG} ${FLAGS} ${FT_C_1}  ${FT_C_2} ${FT_C_3} ${FT_C_4} ${FT_C_5} tests/main.c s21_math.a -o tests/run_tests ${TESTS_UBUNTU}
#	./tests/run_tests
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
