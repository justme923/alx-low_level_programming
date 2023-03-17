#include <stdio.h>
/**
*main - entry poit
*Return: always 0 (success)
*/
int main(void)
{
	int i, x;

	for (i = '0'; i <= '9'; i++)
	{
		for (x = i + 1; x <= '9'; x++)
		{
			putchar(i);
			putchar(x);
			if (i == '8')
				continue;
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
