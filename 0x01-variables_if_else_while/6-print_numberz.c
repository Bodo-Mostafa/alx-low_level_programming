#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print value of n
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
