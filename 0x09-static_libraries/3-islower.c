#include "main.h"
/**
 * _islower - function
 * @c: checked character
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
