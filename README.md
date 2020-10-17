[![License](https://img.shields.io/badge/license-CC%20BY--NC--SA%204.0-blue.svg)](https://bit.ly/cc-by-nc-sa-40)

# Template repository

This is a template repository for programming laboratory works in BSUIR.

# Usage

To compile and run a program use:
```
$ ./build.sh gcc src/<filename>
```

Executable will be started automatically. It can be found in `build/scr/` folder.

# Semester \<1\> lab \<2\>

## Task \<1\>

Using the while statement: find the product of all digits contained in the number entered from the keyboard.

Original (ru):

Используя оператор while: найти произведение всех цифр, содержащихся в числе, введенном с клавиатуры.

## Task \<2\>

Using the for operator: print all numbers from a to b that are divisible by 3 and not divisible by 5.

Original (ru):

Используя оператор for: вывести все числа от a до b, которые нацело делятся на 3 и не делятся нацело на 5.

## Task \<3\>

Using the do..while statement: the program tells the user the length, the width and height of some parallelepiped (natural numbers in the range [1:10]) n times. Enter the volume of the parallelepiped from the keyboard, if answer is incorrect, the program ends.

Original (ru):

Используя оператор do..while: программа n раз сообщает пользователю длину, ширину и высоту некоторого параллелепипеда (натуральные числа в диапазоне [1:10]). Ввести с клавиатуры объём параллелепипеда, при вводе неверного ответа программа завершается.

## Task \<4\>

You are given a sequence 1 + 1/2 ^ 2 + 1/3 ^ 3 + ... + 1 / n ^ n. Find the value of the series. The number n <= 7 is entered from the keyboard. Do not use the exponentiation function.

Original (ru):

Дана последовательность 1 + 1/2^2 + 1/3^3 + ... + 1/n^n. Найти значение ряда. Число n <= 7 вводится с клавиатуры. Функцию возведения в степень не использовать.

# Credits

Written by Alexey Filich.

# License

This repository is licensed under [Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International](LICENCE.md).

# Notes

For compiling with SDL2:
```
-lmingw32 -lSDL2main -lSDL2
```

For compiling with ncurses
```
-lncursesw
```

## Description for some `include` files:

- stdarg.h

    Variable arguments with `va_list args; va_start(args, last_variable_in_function); va_arg(args, type)`.

- stdbool.h

    `True` and `false`.

- stdio.h

    `printf`, `scanf`, `NULL`, etc.

- stdlib.h

    Memory: `malloc`, `calloc`, `free`, \
    Random: `rand`, `srand`.

- string.h

    `memset`, `memcpy`, `memmove`.

- time.h

    `time(0)`.
