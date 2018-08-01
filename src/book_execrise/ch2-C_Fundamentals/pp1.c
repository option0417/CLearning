/*
 * =====================================================================================
 *       Filename:  pp1.c
 *    Description:  Programming Projects Ch2-01
 *        Created:  2018年08月01日
 *         Author:  W.D Su
 * =====================================================================================
 */

#include <stdio.h>

void printStar() {
  printf("        *\n");
  printf("       *\n");
  printf("      *\n");
  printf("*    *\n");
  printf(" *  *\n");
  printf("  *\n");
}

void printStar2() {
  int maxRound      = 6;
  int initSpaceLength = 8;

  while (maxRound-- > 0) {
    int spaceLength = initSpaceLength;
    
    if (initSpaceLength == 5) {
      printf("*");
      spaceLength -= 1;
    } else if (initSpaceLength == 4) {
      printf(" *");
      spaceLength -= 2;
    }
   

    while (spaceLength-- > 0) {
      printf(" ");
    }
    printf("*\n");

    initSpaceLength--;
  }
}

int main(void) {
  printStar();

  printf("----------\n");

  printStar2();
}
