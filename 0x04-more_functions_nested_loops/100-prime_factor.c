#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt - finds the square root
 *
 * @x: input number
 *
 * Return: square root of x
 *
*/

int main(void)
{
	long x, maxf;
	long num = 612852475143;
	double square = sqrt(num);

	for (x = 1; x <= square; x++)
	{
		if (num % x == 0)
		{
			maxf = num / x;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
