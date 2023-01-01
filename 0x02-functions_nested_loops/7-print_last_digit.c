#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: number
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		r = -1 * (n % 10);
		printf("%d", r);
		return (r);
	}
	else
	{
		r = n % 10;
		printf("%d", r);
		return (r);
	}
}
