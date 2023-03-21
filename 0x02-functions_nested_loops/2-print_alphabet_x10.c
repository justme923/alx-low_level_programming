#include "main.h"
/**
*print_alphabet_x10 -prints the alphabet in lowercase 10 times
*/
void print_alphabet_x10(void)
{
	int i, x;

	for (i = 'a', x = '0'; i <= 'z', x <= '9'; i++)
	{
		_putchar(i);
		if (i == 'z')
		{
			x++;
			_putchar('\n');
		}
	}
}
