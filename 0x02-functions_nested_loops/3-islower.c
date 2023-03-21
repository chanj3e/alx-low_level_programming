#include "main.h"
/**
 * _islower - check the character
 * @c: the checker to check
 * Return: 1 for lower case & 0 for upper
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
