#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input
 * return: 0
 */
void print_rev(char *s)
{
	int lenth = 0;
	int i;

	while (*s != '\0')
	{
		lenth++;
		s++;
	}
	s--;
	for (i = lenth; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
