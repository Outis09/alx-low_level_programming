#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * followed by a new line,
 * for multiples of 3, Fizz is printed,
 * for multiples of 5, Buzz is printed,
 * for multiples of both 3 and 5, FizzBuzz is printed
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 15) == 0)
		{
			printf("Fizzbuzz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
