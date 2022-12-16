#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * Return: numbers between 0 and 9
 */

void print_numbers(void)
{
	int i;

	for (i = 0, i < 10, i++)
	{
		_putchar("%d", i);
		i++;
	}
	_putchar("\n");

}
