#include <stdio.h>
/**
*main - entry poit
*Return: always 0 (success)
*/
int main(void)
{
	int i, x, y;

	for (i = '0'; i <= '9'; i++)
	{
		for (x = i + 1; x <= '9'; x++)
		{
			for (y = x + 1; y <= '9'; y++)
			{
				putchar(i);
				putchar(x);
				putchar(y);
				if (i == '7')
					continue;
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
