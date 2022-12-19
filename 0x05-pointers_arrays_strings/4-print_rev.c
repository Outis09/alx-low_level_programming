#include "main.h"

/**
 * print_rev - prints a string in reverse,
 * followed by a new line
 * @s: string
 */
void print_rev(char *s)
{
	_putchar(strrev(s));
	_putchar('\n');
}
