#include <stdio.h>

/**
 * main - prints the name of the program followed by a new line
 * @agrc: number of arguments
 * @agrv: arguments
 * Return: 0
 */
int main(int agrc __attribute__((unused)), char *agrv[])
{
	printf("%s\n", agrv[0]);

	return (0);
}
