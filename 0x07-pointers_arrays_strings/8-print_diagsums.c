#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - Entry point
 *@a: input
 *@size: input
 *Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int row, y;

	for(row = 0; row < size; row++)
	{
		y = (row * y) + row;
		sum1 += a[y];
	}
	for(row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		sum2 += a[y];
	}
	printf("%d, %d\n", sum1, sum2);
}
