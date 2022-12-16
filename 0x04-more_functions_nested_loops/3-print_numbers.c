#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * followed by a newline
 */

void print_numbers(void)
{
	int g;

	for (g = 0; g < 10; g++)
	{
		_putchar(g + '0');
	}
	_putchar('\n');
}
