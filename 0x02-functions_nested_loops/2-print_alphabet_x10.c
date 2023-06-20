#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * return: always 0 (success)
*/

void print_alphabet_x10(void)
{
	int i;
	int x;

	for (x = 1; i <= 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
