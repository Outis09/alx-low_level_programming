#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 and 9 
 * except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		if ((i != 2 || i != 4))
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
