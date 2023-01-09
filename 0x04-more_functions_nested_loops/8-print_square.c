#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: number of # to be printed
 */
void print_square(int size)
{
	int i, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
