#include <stdio.h>
/**
*main - entry poit
*Return: always 0 (success)
*/
ont main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
