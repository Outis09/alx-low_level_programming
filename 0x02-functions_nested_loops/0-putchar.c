#include "main.h"
#include <string.h>

/**
 * main - print a string
 * Return: zero (SUCCESS)
 */
int main(void)
{
	char var[] = "_putchar";
	int i;

	for (i = 0; var[i] != '\0'; i++)
	{
		_putchar(var[i]);
	}
	_putchar('\n');

	return (0);
}
