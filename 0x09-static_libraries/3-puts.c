#include "main.h"

/**
 * _puts - function
 * @s: character
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
