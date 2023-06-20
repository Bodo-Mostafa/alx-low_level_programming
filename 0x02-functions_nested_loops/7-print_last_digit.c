#include "main.h"

/**
 * print_last_digit - print last digit of a number.
 *
 * @n: takes number input
 *
 * Return: lastDigit
*/

int print_last_digit(int n)
{
	int dig;

	dig = n % 10;
	if (dig < 0)
	{
		_putchar(-dig + 48);
		return (-dig);
	}
	else
	{
		_putchar(dig + 48);
		return (dig);
	}
}
