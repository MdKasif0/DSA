/*
Q5. Find First Occurrence

Scenario
A system receives a sequence of event codes. During debugging, you need to know when a particular event code appeared for the first time.

Problem Statement
Given an array and a target value, print the index of its first occurrence.
If it does not exist, print -1.

Input
7
10 20 15 20 30 20 40
20

Output
1
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
    for (int i = 0; i < size; i++) {
        if (array[i] == num) {
            printf("Index: %d", i);
            break;
        }
    }
}