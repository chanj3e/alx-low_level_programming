#include <stdio.h>
#include "main.h"

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - function
 * @n: input
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - function
 * @n: input
 * @i: input
 * Return: square
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;
}
