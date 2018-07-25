/*
 * =====================================================================================
 *       Filename:  dweight.c
 *    Description:  Change value for initialize and remove "weight"
 *        Created:  07/25/18
 *         Author:  W.D Su
 * =====================================================================================
 */

#include <stdio.h>


int main(void) {
  int height, length, width, volume;

  height = 4;
  length = 6;
  width  = 7;
  volume = height * length * width;

  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimesiional weight (pounds): %d\n", (volume + 165) / 166);

  return 0;
}
