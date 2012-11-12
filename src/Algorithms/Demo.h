/*
 * Demo.h
 *
 *  Created on: Nov 12, 2012
 *      Author: option0417
 */

#ifndef DEMO_H_
#define DEMO_H_

#include <stdio.h>
#include <stdlib.h>

#include "common.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "QuickSort.h"
#include "BTreeDFS.h"
#include "../Others/OPUtils.h"
#include <time.h>
#define SIZE 100000

void doDemo();
int getSelection();
SortingObj* createSortingObj();
void doSortingAlgorithm(int selectIndex, SortingObj* sortingObj);

#endif /* DEMO_H_ */
