/*
Q1 Running Sum — Cumulative Processing

Scenario
A monitoring system receives the number of requests handled by a server every hour.
Instead of looking at each hour independently, the administrator wants to know the total number of requests handled from the beginning up to every hour.

Problem Statement
Given an array where arr[i] represents the number of requests received during hour i, modify the array so that arr[i] contains the total requests received from hour 0 through hour i.

Input
5
10 15 20 12 18

Output
10 25 45 57 75

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

    int sum=0;
    printf("The array is: ");
    for (int i = 0; i < size; i++) {
        sum += array[i];
        printf("%d ", sum);
    }

}