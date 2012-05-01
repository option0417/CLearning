/*
 * SelectionSort.c
 *
 *  Created on: Apr 30, 2012
 *      Author: option0417
 */
#include "SelectionSort.h"

void selectionSort(int* array, int size) {
	int idx, i, j;

	for (i = 0; i < size; i++) {
		idx = i;
		for (j = i+1; j < size; j++) {
			if (array[idx] > array[j]) {
				idx = j;
			}
		}
		if (i != idx) {
			array[i] = array[i] ^ array[idx];
			array[idx] = array[i] ^ array[idx];
			array[i] = array[i] ^ array[idx];
		}
	}
}
