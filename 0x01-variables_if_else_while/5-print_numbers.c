#include <stdio.h>
/**
 * main - Program print number from 0 to 9
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
