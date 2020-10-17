// License: CC BY-NC-SA 4.0
/*
 * task4.c
 *
 * You are given a sequence 1 + 1/2 ^ 2 + 1/3 ^ 3 + ... + 1 / n ^ n.
 * Find the value of the series. The number n≤7 is entered from the keyboard.
 * Do not use the exponentiation function.
 *
 * Written by AlexeyFilich
 * 12 sep 2020
 */

#include <stdio.h>

int power(int n) {
    int temp = 1; // Set temp to 1
    for (int i = 0; i < n; i++) // For n = 3 do 1 * n * n * n
        temp *= n;
    return temp;
}

int main(int argc, char* args[]) {
    int n; // Declare n
    printf("Input n: ");
    scanf("%d", &n); // Read n
    if (n > 7) // If n not less or eq 7 exit
        return 0;
    double res = 1;
    for (int i = 2; i <= n; i++) // Since formula is 1 + 1/2^2 + 1/3^3 + ... + 1/n^n we can start from 2.
        res += 1.0 / power(i); // Add 1 divided by i^i
    printf("Result: %lf\n", res);
    return 0;
}
