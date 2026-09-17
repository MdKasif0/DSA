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

    int temp=0;
	for (int i = 0; i < size-1; i++) {
		if (array[i] > array[i + 1]) {
		    temp = array[i + 1];
            array[i + 1] = array[i];
            array[i] = temp;
		}
	}
		
	printf("The Largest element: %d", array[size-1]);
	printf("\nThe Third Largest element: %d", array[size-3]);
	
}
