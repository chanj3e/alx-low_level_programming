#include "main.h"
/**
 * factorial - function
 * @n: number
 * Return: 0 or -1 or numb
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
