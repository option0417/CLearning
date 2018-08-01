/*
 * =====================================================================================
 *       Filename:  pp3.c
 *    Description:  
 *        Created:  2018年08月01日
 *         Author:  W.D Su
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  static const float PI = 3.14f;
  
  int m;

  printf("Enter a redius\n");
  scanf("%d", &m);

  printf("%f\n", (4.0f/3.0f) * PI * (m * m * m));

  return 0;
}
