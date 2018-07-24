/*
 ============================================================================
 Name        : CLearning.c
 Author      : Option0417
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Algorithms/Demo.h"
#include "Others/FileReader.h"
#include "Problems/Knapsack.h"
#include "Problems/PLATEAU.h"
#include "Problems/GT_COUNT.h"
#include "Problems/EQ_COUNT.h"
#include "Problems/MINDIST.h"
#include "Problems/HEADTAIL.h"


int main(int argc, char* argv[]) {
	//doDemo();
	//doKnapsack();
	//int plateau[12] = {1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4};
	//showMaxLengthPlateau(plateau, 12);

	int f[5] = {10, 30, 50, 70, 90};
	int g[5] = {13, 16, 20};
	int h[7] = {3, 6, 2, 1, 4, 5, 2};
	//printf("GT Count : %d", getGTCount(f, 5, g, 5));
	//printf("EQ Count : %d", getEQCount(f, 5, g, 5));
	//printf("MinDist : %d", getMinDist(f, 5, g, 3));
	//printf("HeadTail : %d", getHeadTail(h, 7));

	printf("Hello, World\n");

	return EXIT_SUCCESS;
}
