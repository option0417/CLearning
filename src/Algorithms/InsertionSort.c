/*
 * InsertionSort.c
 *
 *  Created on: Apr 30, 2012
 *      Author: option0417
 */
#include "InsertionSort.h"

void insertionSort(int* list, int size) {
	int i, j, val;

	for (i = 1; i < size; i++) {
		val = list[i];
		for (j = i-1; j >= 0; j--) {
			if (val < list[j]) {
				list[j+1] = list[j];
			} else {
				break;
			}
		}
		list[j+1] = val;
	}
}
