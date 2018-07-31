/*
 * =====================================================================================
 *       Filename:  pp2.c
 *    Description:  
 *        Created:  2018年08月01日
 *         Author:  W.D Su
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  static const int PI = 3.14f;
  
  int m = 10;

  printf("%f\n", (4.0f/3.0f) * PI * (m * m * m));
  printf("%d\n", (4/3) * PI * (m * m * m));

  return 0;
}
