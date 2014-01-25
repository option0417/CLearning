/*
 * quadratic_equation.c
 *
 *  Created on: 2013/8/30
 *      Author: 1010481
 */

#include "quadratic_equation.h"

/*
 *  -b + sqrt( b*b - 4 * a * c)   / 2a
 *  -b - sqrt( b*b - 4 * a * c)   / 2a
 */
void  quadratic_equation(int a, int b, int c) {
	if (a == 0) {
		printf("None Quadratic_equation");
		return;
	} else if ((pow(b, 2) - 4 * a * c) < 0) {
		printf("None RealNumber Resole");
		return;
	} else {
		float ans1 = (-b + sqrt(pow(b, 2) - 4*a*c)) / 2 * a;
		float ans2 = (-b - sqrt(pow(b, 2) - 4*a*c)) / 2 * a;
		printf("Answer 1 : %f\n", ans1);
		printf("Answer 2 : %f\n", ans2);
	}
}
