/*
 * InsertionSort.c
 *
 *  Created on: Apr 30, 2012
 *      Author: option0417
 */
#include "InsertionSort.h"

void insertionSort(SortingObj* sortingObj) {
	int baseIndex, compareIndex, tempVal;

	for (baseIndex = 1; baseIndex < sortingObj->size; baseIndex++) {
		tempVal = sortingObj->elementList[baseIndex];
		for (compareIndex = baseIndex-1; compareIndex >= 0; compareIndex--) {
			if (tempVal < sortingObj->elementList[compareIndex]) {
				sortingObj->elementList[compareIndex+1] = sortingObj->elementList[compareIndex];
			} else {
				break;
			}
		}
		sortingObj->elementList[compareIndex+1] = tempVal;
	}
}
