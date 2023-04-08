#include "main.h"
/**
 * _memset - function
 * @s: start
 * @b: value
 * @n: number
 * Return: changes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
