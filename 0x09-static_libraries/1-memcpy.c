#include "main.h"
/**
 * _memcpy - function
 * @dest: input
 * @src: input
 * @n: number
 * Return: value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
