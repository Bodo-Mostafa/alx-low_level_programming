#include "main.h"

/**
 * jack_bauer- prints every minute of the day
*/

void jack_bauer(void)
{
	int x, y, z, c;

	for (x = 0; x <= 2; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <= 5; z++)
			{
				for (c = 0; c <= 9; c++)
				{
					if (x >= 2 && y >= 4)
						break;
					_putchar(x + 48);
					_putchar(y + 48);
					_putchar(58);
					_putchar(z + 48);
					_putchar(c + 48);
					_putchar('\n');
				}
			}
		}
	}
}
