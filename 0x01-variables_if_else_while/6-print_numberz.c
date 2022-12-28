#include <stdio.h>

/**
 * main - prints digits in base 10,
 * from 0 to 9 without using
 * the variable type char
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
