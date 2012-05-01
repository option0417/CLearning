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
#include "Algorithms/BTreeDFS.h"

#define SIZE 100000

int main(void) {
	//Variables for mesure program performance
	clock_t s, f;

	int* list = getRandomList(SIZE);
	showList(list, SIZE);

	//Start record
	s = getClock();
	printf("Start Time : %ld\n", s);

	//Algorithm Function
	//bubbleSort(list, SIZE);
	//selectionSort(list, SIZE);
	//insertionSort(list, SIZE);
	//quickSort(list, 0, SIZE-1);
	//bTreeTrace(list, 20000, 1234);

	//Finish record
	f = getClock();
	printf("End Time : %ld\n", f);

	showList(list, SIZE);

	printf("Program Execution Time : %ld", f - s);
	free(list);

	return EXIT_SUCCESS;
}
