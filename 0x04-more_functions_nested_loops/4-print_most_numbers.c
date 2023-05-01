/* print_most_numbers.c file */
#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers from 0 to 9 followed by a new line,
 *                      but excluding 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
