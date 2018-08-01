/*
 * =====================================================================================
 *       Filename:  pp5.c
 *    Description:  
 *        Created:  08/01/18
 *         Author:  W.D Su
 * =====================================================================================
 */

#include <stdio.h>


int expo(int val, int exp) {
  while (exp-- > 0) val *= val;
  return val;
}

/*
 * 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 */
int main(void) {
  int x = 0;
  
  printf("Enter a value: ");
  scanf("%d", &x);

  

  return 0;
}
