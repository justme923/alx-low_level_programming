#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
*/
void print_diagonal(int n)
{
	int i, x;

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			break;
		for (x = 0; x < i; i++)
			_putchar(' ');
		_putchar('\\');
	}
	_putchar('\n');
}
