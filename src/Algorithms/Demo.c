/*
 * Demo.c
 *
 *  Created on: Nov 12, 2012
 *      Author: option0417
 */

#include "Demo.h"

void doDemo() {
	SortingObj* sortingObj = createSortingObj();
	doSortingAlgorithm(getSelection(), sortingObj);
	free(sortingObj);
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
