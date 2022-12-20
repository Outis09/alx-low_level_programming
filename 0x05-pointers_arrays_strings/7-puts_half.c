#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string whose second half is to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int len, n, i;

	len = strlen(str);

	if (len % 2 == 0)
	{
		n = len / 2;
		for (i = n; i <= len - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		for (i = n + 1; i <= len - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
