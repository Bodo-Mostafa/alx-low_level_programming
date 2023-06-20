#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 * the alphabet a - z
 *
*/

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
