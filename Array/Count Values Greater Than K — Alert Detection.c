/*
Q2 Two Sum — Pair Detection

Scenario
A financial system analyzes a set of transaction amounts. During an investigation, analysts provide a target amount and want to know whether two different transactions together produced exactly that amount.

Problem Statement
Given N integers and a target value T, find two different elements whose sum is exactly T.
Assume that exactly one valid pair exists.

Input
6
12 7 19 25 3 10
22

Output
12 10

*/

#include <stdio.h>

int main() {

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++) {
        printf("Enter the %d element of the array: ", i);
        scanf("%d", &array[i]);
    }

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {

            if (array[i] + array[j] == num) {
                printf("%d %d", array[i], array[j]);
                return 0;
            }
        }
    }

    return 0;
}