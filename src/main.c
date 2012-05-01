/*
 ============================================================================
 Name        : CLearning.c
 Author      : Option0417
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Algorithms/BubbleSort.h"
#include "Algorithms/SelectionSort.h"
#include "Algorithms/InsertionSort.h"

#define SIZE 10
int* getArray();
void show(int* array, int size);

int main(void) {
	int* array = getArray();

	show(array, SIZE);
	//bubbleSort(array, SIZE);
	//selectionSort(array, SIZE);
	insertionSort(array, SIZE);
	show(array, SIZE);

	free(array);
	return EXIT_SUCCESS;
}

int* getArray() {
	srand(time(NULL));
	int i = 0;
	int* array = (int*)malloc(sizeof(int) * SIZE);

	while(i < SIZE) {
		array[i++] = rand() % 100 + 1 ;
	}
	return array;
}

void show(int* array, int size) {
	int i = 0;
	while(i < size) {
		printf("%d ", array[i++]);
	}printf("\n");
}
