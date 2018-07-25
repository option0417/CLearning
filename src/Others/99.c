/*
 * =====================================================================================
 *       Filename:  99.c
 *    Description:  Just a example for 99 computation.
 *        Created:  07/25/18
 *         Author:  W.D Su
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>


void simple99() {
  int a = 1;
  int b = 1;

  for (; a < 10; a++) {
    for (b = 1; b < 10; b++) {
      printf("%2d *%2d = %2d ", a, b, a*b);
    }
    printf("\n");
  }
  return;
}

int main(void) {
  simple99();
//  return 0;
}
