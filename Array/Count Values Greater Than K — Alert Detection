/*
Q3. Count Values Greater Than K — Alert Detection

Scenario
A monitoring system records the response time of N requests. Requests taking more than a specified limit K are considered slow.

Problem Statement
Given N response times and a value K, determine how many response times are strictly greater than K.

Input
6
120 80 250 90 310 150
150

Output
2
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
    int k;
    printf("Enter the value : ");
    scanf("%d", &k);

    int inc=0;
    for (int i = 0; i < size-1; i++) {
        if (array[i] > k) {
            inc++;
        }
    }
    printf("The number of values greater than %d is: %d", k,inc);
}