#include "main.h"
/**
 * _strlen - function
 * @s: input
 * Return: 0
 */
int _strlen(char *s)
{
	int res;

	res = 0;
	while (*s != '\0')
	{
		res++;
		s++;
	}
	return (res);
}
