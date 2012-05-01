/*
 * BTreeDFS.c
 *
 *  Created on: May 1, 2012
 *      Author: option0417
 */
#include "BTreeDFS.h"

int bTreeTrace(int* root, size_t size, int val) {
	static int level = 1;

	size_t cnt = 0;
	size_t idx = 0;
	for (cnt = 0; cnt < size; cnt++) {
		for (idx = cnt; idx < size; idx = idx*2+1) {
			if (root[idx] == val) {
				return level;
			} else {
				level++;
			}
		}
		idx--;
		idx /= 2;
		idx++;
		for (; idx > 0; idx/=2) {
			if (root[idx] == val) {
				return level;
			}
		}
	}

	return 0;
}
