/*
 * QuickSort.c
 *
 *  Created on: 2012/5/1
 *      Author: 1010481
 */
#include "QuickSort.h"

void doSorting(unsigned int* elementList, int startIndex, int endIndex);

void quickSort(SortingObj* sortingObj) {
	unsigned int startIndex = 0;
	doSorting(sortingObj->elementList, 0, sortingObj->size-1);
}

void doSorting(unsigned int* elementList, int startIndex, int endIndex) {
	if (startIndex < endIndex) {
		int left = startIndex;

		// Avoid ignore the comparison of variables
		int right = endIndex+1;
		int key = elementList[startIndex];

		while (left < right) {
			while(left+1 <= endIndex && elementList[++left] < key);
			while(right-1 >= startIndex && elementList[--right] > key);

			if (left < right) {
				exchange(&elementList[left], &elementList[right]);
			}
		}

		if (startIndex < right) {
			exchange(&elementList[startIndex], &elementList[right]);
		}

		doSorting(elementList, startIndex, right-1);
		doSorting(elementList, right+1, endIndex);
	}
}
