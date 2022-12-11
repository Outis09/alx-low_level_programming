#include <stdio.h>

/**
 * main - get sizes of various data types
 * Return: zero (SUCCESS)
 */
int main(void)
{
	char q;
	int w;
	long int e;
	long long int r;
	float t;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(q));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(w));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(e));
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(r));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(t));

	return (0);
}

