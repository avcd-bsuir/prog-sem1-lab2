// License: CC BY-NC-SA 4.0
/*
 * task2.c
 *
 * Using the for operator: print all numbers from a to b that are divisible by 3 and not divisible by 5.
 *
 * Written by AlexeyFilich
 * 12 sep 2020
 */

#include <stdio.h>

int main(int argc, char* args[]) {
    int a, b; // Variable declaring
    for (;;) {
        printf("Input a and b: ");
        scanf("%d%d", &a, &b); // Reading
        for (int i = a; i <= b; i++) // From a to b including a and b
            if (i % 3 == 0 && i % 5 != 0) // If i can be divided by 3 with no remainder and can not be divided by 5
                printf("%d ", i); // Print i
        printf("\n");
    }
    return 0;
}
