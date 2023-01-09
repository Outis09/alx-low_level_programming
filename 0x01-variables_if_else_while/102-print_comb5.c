#include <stdio.h>

/**
 * main - prints all possible combinations of two digit numbers
 * numbers range from 0 to 99
 * the two numbers should be seperated by space
 * the combination of numbers must be followed by a comma and space
 * Return: 0
 */
int main(void)
{
	int i, x;

	for (i = 0; i <= 99; i++)
	{
		for (x = 0; x <= 99; x++)
		{
			if (i < x)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((x / 10) + '0');
				putchar((x % 10) + '0');
				if (i != 98 || x != 99)
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
