#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
*main - entry poit
*Return: always 0 (success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", int);
	else if (n < 0)
		printf("%d is negative", int);
	else if (n == 0)
		printf("%d is zero", int);
	return (0);
}
