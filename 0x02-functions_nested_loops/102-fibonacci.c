#include <stdio.h>
/**
 * main - program that prints the first 50 Fibonacci numbers
 * Return: Always (Success)
 */
int main(void)
{
	int i = 0;
	long x = 1, y = 2;

	while (i < 50)
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
	return (0);
}
