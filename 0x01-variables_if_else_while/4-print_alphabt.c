#include <stdio.h>
/**
*main - entry poit
*Return: always 0 (success)
*/
int main(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'q' || ch != 'e')
			putchar(ch);
		else
			continue;
	}
	putchar('\n')
		return (0);
}
