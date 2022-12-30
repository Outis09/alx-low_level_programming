#include "main.h"

/**
 * _abs - prints absolute value of an integer
 * @r: integer
 * Return: absolute value of integer
 */
int _abs(int r)
{
	if (r >= 0)
	{
		_putchar(r);
	}
	else if (r < 0)
	{
		_putchar(-r);
	}

	return (0);
}
