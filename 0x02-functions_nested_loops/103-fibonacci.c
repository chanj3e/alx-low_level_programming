#include <stdio.h>
/**
 * main - program
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long x = 1, y = 2, sum = y;

	while (x + y < 4000000)
	{
		y += x;
		if (y % 2 == 0)
		
			sum += y;
		x = y - x;
		++i;
	}
	printf("%ld\n", sum);
	return (0);
}
