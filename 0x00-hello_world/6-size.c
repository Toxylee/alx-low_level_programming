#include <stdio.h>

/**
 *
 * main - Entry Point
 *
 * Returns: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	float f;
	long int l;
	long long int g;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(g));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
