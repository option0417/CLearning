/*
 * SelectionSort.c
 *
 *  Created on: Apr 30, 2012
 *      Author: option0417
 */
#include "SelectionSort.h"

void selectionSort(SortingObj* sortingObj) {
	int tempIndex, baseIndex, compareIndex;

	for (baseIndex = 0; baseIndex < sortingObj->size; baseIndex++) {
		tempIndex = baseIndex;
		for (compareIndex = baseIndex+1; compareIndex < sortingObj->size; compareIndex++) {
			if (sortingObj->elementList[tempIndex] > sortingObj->elementList[compareIndex]) {
				tempIndex = compareIndex;
			}
		}

		if (baseIndex != tempIndex) {
			exchange(&sortingObj->elementList[baseIndex], &sortingObj->elementList[tempIndex]);
		}
	}
}
