/*
Q6. Count Local Peaks

Scenario
A fitness application records the number of steps taken every hour. An hour is considered a peak hour if the number of steps is greater than both the previous and next hour.

Problem Statement
Count the number of elements that are greater than both their immediate neighbors.
The first and last elements cannot be considered peaks.

Input
7
10 20 15 30 25 40 35

Output
3

Peaks:
20
30
40

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
	
	int inc=0;
    for (int i = 1; i < size - 1; i++) {
        if (array[i] > array[i-1] && array[i] > array[i+1]) {
            printf("Peak: %d\n", array[i]);
            inc++;
        }
    }
    printf("Peak Hours: %d", inc);
}
