#include "main.h"

/**
 * jack_bauer - prints every minute of the file Jack Bauer,
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, r;

	for (i = 0; i <= 23; i++)
	{
		for (r = 0; r <= 59; r++)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(i + '0');
				_putchar(':');
				if (r < 10)
				{
					_putchar('0');
					_putchar(r + '0');
				}
				else 
				{
					_putchar(r + '0');
				}
				_putchar('\n');
				
			}
			else if (i >= 10) 
			{
				_putchar(i + '0');
				_putchar(':');
				if (r < 10)
				{
					_putchar('0');
					_putchar(r + '0');
				}
				else 
				{
					_putchar(r + '0');
				}
				_putchar('\n');
			}
		}
	}
}
