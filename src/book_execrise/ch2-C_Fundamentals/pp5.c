/*
 * =====================================================================================
 *       Filename:  pp5.c
 *    Description:  
 *        Created:  08/01/18
 *         Author:  W.D Su
 * =====================================================================================
 */

#include <stdio.h>


int calExp(int val, int expTimes) {
  int exp = val;
  while (expTimes-- > 1) val *= exp;
  return val;
}

/*
 * 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 * Ans: 0 (x = 1)
 * Ans: 258 (x = 2)
 */
int main(void) {
  int x = 0;
  
  printf("Enter a value: ");
  scanf("%d", &x);

  printf("%d\n", calExp(x, 5));
  printf("%d\n", calExp(x, 4));
  printf("%d\n", calExp(x, 3));
  printf("%d\n", calExp(x, 2));
  
  printf("Result: %d\n", 3 * calExp(x, 5) + 2 * calExp(x, 4) - 5 * calExp(x, 3) - calExp(x, 2) + 7 * x - 6);  

  return 0;
}
