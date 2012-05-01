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
#include "Others/OPUtils.h"
#include "Algorithms/BubbleSort.h"
#include "Algorithms/SelectionSort.h"
#include "Algorithms/InsertionSort.h"
#include "Algorithms/QuickSort.h"

#define SIZE 100000000

int main(void) {
	clock_t s, f;
	int* list = getRandomList(SIZE);
	//showList(list, SIZE);

	s = getClock();
	printf("Start Time : %ld\n", s);
	//bubbleSort(list, SIZE);
	//selectionSort(list, SIZE);
	//insertionSort(list, SIZE);
	quickSort(list, 0, SIZE-1);
	f = getClock();
	printf("End Time : %ld\n", f);
	//system("pause");
	//showList(list, SIZE);
	printf("Program Execution Time : %ld", f - s);

	free(list);
	return EXIT_SUCCESS;
}
