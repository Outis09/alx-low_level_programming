#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number
 * Return: 1 if number is grater than 0,
 * 0 if number if equal to 0,
 * -1 if number is less than o
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
