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


int main(int argc, char* argv[]) {
	//doDemo();
	//doKnapsack();

	//int plateau[12] = {1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4};
	//showMaxLengthPlateau(plateau, 12);

	int f[5] = {1, 3, 5, 7, 9};
	int g[5] = {2, 3, 4, 7, 8};
	//printf("GT Count : %d", getGTCount(f, 5, g, 5));

	printf("EQ Count : %d", getEQCount(f, 5, g, 5));

	return EXIT_SUCCESS;
}
