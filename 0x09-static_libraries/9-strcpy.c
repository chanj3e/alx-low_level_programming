#include "main.h"
/**
 * _strcpy - function
 * @dest: string
 * @src: copied s
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\n';
	return (dest);
}
