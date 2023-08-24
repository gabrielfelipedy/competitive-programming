#include <stdio.h>
#include <stdlib.h>

void printarr(int arr[], int sz) {
	for(int i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	putchar('\n');
}

void shift(int arr[], int sz, int key) {
	for(int i = key; i < sz-1; i++) {
		arr[i] = arr[i+1];
	} 

	arr[sz-1] = -1;
}

int main() {

	int size = 5;
	int step = 2;
	int arr[size];
	for(int i = 0; i < size; i++) arr[i] = i+1;


	int key = step - 1;
	int aux = size;

	printarr(arr, size);
	printf("*******\n");

	for(int i = 0; i < size-1; i++) {
		int oldkey = key;
		aux--;
	      	key = (key + step) % aux;

		shift(arr, size, oldkey);
		printarr(arr, size);
	}

	printf("%d\n",arr[0]);
}
