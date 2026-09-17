/*
Q4. Count Positive and Negative Values

Scenario
A financial application records the profit/loss of transactions. Positive values represent profit and negative values represent loss.

Problem Statement
Given an array of integers, count how many values represent profit and how many represent loss.
Ignore zero.

Input
7
20 -5 0 15 -10 -2 30

Output
Profit: 3
Loss: 3
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

    int positive=0;
    int negative=0;
    for (int i = 0; i < size; i++) {
        if (array[i] > 0) {
            positive++;
        }
        else if(array[i] < 0) {
            negative++;
        }
        else{
        }
    }
    printf("Profit: %d", positive);
    printf("\nLoss: %d", negative);
}