#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins to make change for
 * an amount of money
 * @argc: number of arguments supplied
 * @argv: pointer to string arrays supplied as arguments
 * Return: 1 if more than 2 arguments are passed,
 * 0 otherwise
 */
int main(int argc, char *argv[])
{
	int num, coins;

	num = atoi(argv[1]);
	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (num < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (num >= 25)
	{
		coins += num / 25;
		num = num % 25;
	}
	if (num >= 10)
	{
		coins += num / 10;
		num = num % 10;
	}
	if (num >= 5)
	{
		coins += num / 5;
		num = num % 5;
	}
	if (num >= 2)
	{
		coins += num / 2;
		num = num % 2;
	}
	if (num == 1)
	{
		coins += num / 1;
	}
	printf("%d\n", coins);
	return (0);
}
