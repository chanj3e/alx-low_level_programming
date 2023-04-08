#include "main.h"
/**
 * _strchr - function
 * @s: input
 * @c: anther
 * Return: walre
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
