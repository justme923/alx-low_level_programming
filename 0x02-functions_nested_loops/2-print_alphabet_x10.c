#include "main.h"
/**
*print_alphabet_x10 -prints the alphabet in lowercase 10 times
*/
void print_alphabet_x10(void)
{
	int i, x;

	for (i = '0'; i <= '9'; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
		_putchar('\n');
	}
}
