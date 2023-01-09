#include <stdio.h>

/**
 * main - prints all possible combinations of three digit numbers
 * prints only the smallest combination of three digits
 * Return: 0
 */
int main(void)
{
	int i, x, j;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			for (j = 0; j <= 9; j++)
			{
				if (x > i && j > x)
				{
					putchar(i + '0');
					putchar(x + '0');
					putchar(j + '0');
					if (i < 7 || x < 8 || j < 9)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
