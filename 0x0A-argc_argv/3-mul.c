#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: pointer to string arrays passed as arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
