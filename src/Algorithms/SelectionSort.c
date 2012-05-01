/*
 * SelectionSort.c
 *
 *  Created on: Apr 30, 2012
 *      Author: option0417
 */
#include "SelectionSort.h"

void selectionSort(int* list, int size) {
	int idx, i, j;

	for (i = 0; i < size; i++) {
		idx = i;
		for (j = i+1; j < size; j++) {
			if (list[idx] > list[j]) {
				idx = j;
			}
		}
		if (i != idx) {
			list[i] = list[i] ^ list[idx];
			list[idx] = list[i] ^ list[idx];
			list[i] = list[i] ^ list[idx];
		}
	}
}
