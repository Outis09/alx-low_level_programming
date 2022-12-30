#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 */
void print_to_98(int n)
{
	int r;

	for (r= n, r <= 98; r++)
	{
		_putchar(r + '0');
		if (r != 98)
		{
			_putchar(', ');
		}
	}
}
