#include "main.h"

/**
 * more_numbers - prints 10 times a number between 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int x;

	for (x = 0; x <=14; x++)
	{
		_putchar(x * '10');
	}
	_putchar('\n');
}
