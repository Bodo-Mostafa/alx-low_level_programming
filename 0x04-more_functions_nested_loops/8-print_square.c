#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @sz: is the size of the square
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
