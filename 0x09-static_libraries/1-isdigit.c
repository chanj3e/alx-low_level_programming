#include "main.h"
/**
 * _isdigit - function
 * @c: number
 * Return: value
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
