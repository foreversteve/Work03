#include <stdio.h>
#include <stdlib.h>

int main(){

	int arr[10];
	srand(time(NULL));
	for (int i = 0; i < 10; i++){
		arr[i] = rand();
	}

	arr[9] = 0;

	printf("First Array:\n");
	for (int i = 0; i < 10; i++){
		printf("%d\n", arr[i]);
	}

	int *a = arr;
	int arg[10];
	int *b = arg;

	for (int i = 0; i < 10; i++){
		*(b + (9 - i)) = *(a+i); 
	}

	printf("\nSecond Array:\n");
	for (int i = 0; i < 10; i++){
		printf("%d\n", arg[i]);
	}

	
	return 0;
}