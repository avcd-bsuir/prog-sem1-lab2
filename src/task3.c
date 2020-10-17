// License: CC BY-NC-SA 4.0
/*
 * task3.c
 *
 * Using the do..while statement: the program tells the user the length,
 * the width and height of some parallelepiped (natural numbers in the range [1:10]) n times.
 * Enter the volume of the parallelepiped from the keyboard, if answer is incorrect, the program ends.
 *
 * Written by AlexeyFilich
 * 12 sep 2020
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* args[]) {
    int vol, a, b, c;
    do { // Ask user for volume of some parallelepiped
        a = rand() % 10 + 1, b = rand() % 10 + 1, c = rand() % 10 + 1; // Generate 3 random numbers
        printf("Dimensions: (%d %d %d), what is the volume? Volume is: ", a, b, c);
        scanf("%d", &vol);
    } while (vol == a * b * c); // Until the answer is not a * b * c
    printf("Wrong!\n");
    return 0;
}
