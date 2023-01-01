#include "main.h"

/**
 * jack_bauer - prints every minute of the file Jack Bauer,
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, r, j, x;

	for (i = 0; i <= 2; i++)
	{
		for (r = 0; r <= 3; r++)
		{
			for (j = 0; j <= 5; j++)
			{
				for (x = 0; x <= 9; x++)
				{
					_putchar(i + '0');
					_putchar(r + '0');
					_putchar(':');
					_putchar(j + '0');
					_putchar(x + '0');
					_putchar('\n');
				}
			}
		}
	}
}
