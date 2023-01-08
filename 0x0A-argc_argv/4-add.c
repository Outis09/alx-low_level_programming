#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positives numbers followed by a new line
 * @argc: number of arguments supplied
 * @argv: pointer to string arrays supplied as arguments
 * Return: 0 if the arguments contains positive numbers,
 * 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, x, tot;

	tot = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x]; x++)
		{
			if (argv[i][x] < 48 || argv[i][x] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		tot += atoi(argv[i]);
	}
	printf("%d\n", tot);
	return (0);
}
