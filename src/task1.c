// License: CC BY-NC-SA 4.0
/*
 * task1.c
 *
 * Using the while statement: find the product of all digits contained in the number entered from the keyboard.
 *
 * Written by AlexeyFilich
 * 12 sep 2020
 */

#include <stdio.h>

int main(int argc, char* args[]) {
    for (;;) {
        int num = 0, mul = 1; // Declaration of variables num and mul
        printf("Input a number: ");
        scanf("%d", &num);
        while (num > 9) { // While number is not one-digit
            mul *= num % 10; // Multiplication result is multiplied by last digit
            num = num / 10; // Trim last digit
        }
        printf("Multiplication result: %d\n", mul * num); // Since mult. result is not multiplied on first digit I did it here
    }
    return 0;
}
