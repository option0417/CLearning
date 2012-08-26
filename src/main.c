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
#include "Others/FileReader.h"
#include "Algorithms/common.h"
#include "Algorithms/BubbleSort.h"
#include "Algorithms/SelectionSort.h"
#include "Algorithms/InsertionSort.h"
#include "Algorithms/QuickSort.h"
#include "Algorithms/BTreeDFS.h"

#define SIZE 100000

int getSelection();
SortingObj* createSortingObj();
void doSortingAlgorithm(int selectIndex, SortingObj* sortingObj);

int main(int argc, char* argv[]) {
	SortingObj* sortingObj = createSortingObj();
	doSortingAlgorithm(getSelection(), sortingObj);
	free(sortingObj);
	return EXIT_SUCCESS;
}

int getSelection() {
	int selection = -1;
	printf("Select an Sorting-Algorithm : \n");
	printf("1. InsertionSort \n");
	printf("2. SelectionSort \n");
	printf("3. BubbleSort \n");
	printf("4. QuickSort \n");
	printf("? ");
	scanf("%d", &selection);
	return selection;
}

SortingObj* createSortingObj() {
	//unsigned int a = 5, b = 5, c = 5, d = 1, e = 5, f = 6, g = 4, h = 1, i = 2, j = 10;
	//unsigned int customList[5] = {a, b, c, d, e};
	unsigned int* list = getRandomList(SIZE);
	SortingObj* sortingObj = (SortingObj*)malloc(sizeof(SortingObj));
	sortingObj->elementList = list;
	sortingObj->size = SIZE;
	return sortingObj;
}

void doSortingAlgorithm(int selectIndex, SortingObj* sortingObj) {
	void (*funPtr) (SortingObj* sortingObj);

	switch(selectIndex) {
	case 1:
		funPtr = insertionSort;
		break;
	case 2:
		funPtr = selectionSort;
		break;
	case 3:
		funPtr = bubbleSort;
		break;
	case 4:
		funPtr = quickSort;
		break;
	default:
		printf("Initial SortingALgorithm Faild.\n");
		return;
	}

	//showList(sortingObj->elementList, SIZE);

	TimeMeasure timeMeasure;
	timeMeasure.start = clock();
	funPtr(sortingObj);
	timeMeasure.end = clock();

	//showList(sortingObj->elementList, SIZE);
	double cpu_time_used = ((double) (timeMeasure.end - timeMeasure.start)) / 1000000l;
	printf("ExecutionTime : %f", cpu_time_used);
}
