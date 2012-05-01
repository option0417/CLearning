/*
 * QuickSort.c
 *
 *  Created on: 2012/5/1
 *      Author: 1010481
 */
#include "QuickSort.h"

void quickSort(int* list, int _left, int _right) {
	if (_left < _right) {
		int left = _left;
		int right = _right+1;
		int key = list[_left];

		while (left < right) {
			while(list[++left] < key);
			while(list[--right] > key);

			//printf("Left: %d, Right: %d\n", left, right);
			if (left < right) {
				list[left] = list[left] ^ list[right];
				list[right] = list[left] ^ list[right];
				list[left] = list[left] ^ list[right];
			}
		}
		if (_left != right) {
			list[_left] = list[_left] ^ list[right];
			list[right] = list[_left] ^ list[right];
			list[_left] = list[_left] ^ list[right];
		}

		quickSort(list, _left, right-1);
		quickSort(list, right+1, _right);
	}
}
