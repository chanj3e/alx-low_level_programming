#include <stdio.h>
/**
 * main -  finds and prints the first 98 Fibonacci numbers, 1 and 2
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long x = 1, y = 2;

	while (i < 98)
	{
		if (i == 0)
		{
			printf("%ld", x);
		}
		else if (i == 1)
		{
			printf(", %ld", y);
		}
		else
		{
			y += x;
			x = y - x;
			printf(", %ld", y);
		}
		++i;
	}
	printf("\n");
}
