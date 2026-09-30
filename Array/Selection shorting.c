/******************************************************************************
Meow
*******************************************************************************/

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
	
	for(int i= 0; i < size-1; i++){
	    int mini= i;
	    for(int j=i+1; j<size; j++){
	        if(array[j]< array[mini])
	        mini=j;
	    }
	    int temp;
	    temp=array[i];
	    array[i] = array[mini];
	    array[mini] = temp;
	}
	
	for (int i = 0; i < size; i++) {
		printf("%d",array[i]);
	}
}

