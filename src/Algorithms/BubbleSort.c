/*
 * BubbleSort.c
 *
 *  Created on: Apr 30, 2012
 *      Author: option0417
 */
#include "BubbleSort.h"

int isNeedExchange(unsigned int* currValue, unsigned int* nextValue);
void changeStatus(int* status);
int isEnd(int* status);

void bubbleSort(SortingObj* sortingObj) {
	int baseIndex, compareIndex;
	int status = 0;

	for (baseIndex = 0; baseIndex < sortingObj->size; baseIndex++) {
		for (compareIndex = 0; compareIndex < sortingObj->size-baseIndex-1; compareIndex++) {
			if (isNeedExchange(&sortingObj->elementList[compareIndex], &sortingObj->elementList[compareIndex + 1])) {
				exchange(&sortingObj->elementList[compareIndex], &sortingObj->elementList[compareIndex + 1]);
				changeStatus(&status);
			}
		}

		if (isEnd(&status)) {
			return;
		} else {
			changeStatus(&status);
		}
	}
}

int isNeedExchange(unsigned int* currValue, unsigned int* nextValue) {
	return (*currValue > *nextValue);
}

void changeStatus(int* status) {
	*status = 1;
}

int isEnd(int* status) {
	return !(*status);
}
