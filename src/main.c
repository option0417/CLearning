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

#include "CityMap.h"

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	City **list = createMap();

	printf("%s", list[3]->name);


	return EXIT_SUCCESS;
}
