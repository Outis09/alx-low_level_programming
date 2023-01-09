#include <stdio.h>

/**
 * main - prints all possible combinations of two digits
 * the two digits must be different
 * print only the smallest combination of digits
 * Return: 0
 */
int main(void)
{
	int i, x;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (x > i)
			{
				putchar(i + '0');
				putchar(x + '0');
				if (i < 8 || x < 9)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
