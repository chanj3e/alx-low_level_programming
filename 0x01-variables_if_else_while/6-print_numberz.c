#include <stdio.h>
/**
 * main - Program print number from 0 to 9
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
