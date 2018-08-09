/*
 * =====================================================================================
 *       Filename:  pp8.c
 *    Description:  Program that calculate remaining balance on a loan.
 *        Created:  08/09/18
 *         Author:  W.D Su
 * =====================================================================================
 */

#include <stdio.h>

float calBalance(float loan, float ir, float payment) {
  float yearIR = loan * ir;
  float monthIR = yearIR / 12.0f;

  return loan - payment + monthIR;
}

int main(void) {
  float loan    = 0.0f;
  float ir      = 0.0f;
  float payment = 0.0f;
 
  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  
  printf("Enter interest rate: ");
  scanf("%f", &ir);
  ir = 0.01f * ir;

  printf("Enter monthly payment: ");
  scanf("%f", &payment);

  loan = calBalance(loan, ir, payment);
  printf("Balance remaining after first payment: $%.2f\n", loan);

  loan = calBalance(loan, ir, payment);
  printf("Balance remaining after second payment: $%.2f\n", loan);

  loan = calBalance(loan, ir, payment);
  printf("Balance remaining after third payment: $%.2f\n", loan);
  return 0;
}
