#include "main.h"
/**
 * _strspn - function
 * @s: string
 * @accept: is in
 * Return: the length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int res = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				res++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (res);
		}
		s++;
	}
	return (res);
}
