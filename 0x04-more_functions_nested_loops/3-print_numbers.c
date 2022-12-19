#include "main.h"

/**
*print_numbers - prints the numbers since 0 to 9
*Return: The number since 0 to 9
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	_putchar(i + '0');
	}
	_putchar('\n');
}
