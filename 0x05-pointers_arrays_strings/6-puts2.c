#include "main.h"

/**
 * puts2 - prints every character of a string followed by a new line
 * @str: string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
