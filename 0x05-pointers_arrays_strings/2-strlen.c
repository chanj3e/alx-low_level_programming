#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input
 * Return: length
 */
int _strlen(char *s)
{
	int lenth = 0;

	while (*s != '\0')
	{
		lenth++;
		s++;
	}
	return (lenth);
}
