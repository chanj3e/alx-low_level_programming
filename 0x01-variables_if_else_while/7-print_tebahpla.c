#include <stdio.h>
/**
 * main - a program that prints the lowercase alphabet in reverse.
 * Return: 0 Always (Success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
