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
#include "Problems/Knapsack.h"
#include "Problems/PLATEAU.h"
#include "Others/FileReader.h"


int main(int argc, char* argv[]) {
	//doDemo();
	//doKnapsack();

	int plateau[12] = {1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4};

	showMaxLengthPlateau(plateau, 12);

	return EXIT_SUCCESS;
}
