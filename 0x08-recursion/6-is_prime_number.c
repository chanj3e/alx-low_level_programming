#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - function
 * @n: number
 * Return: value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - function
 * @n: number
 * @i: iteration time
 * Return: 1 or 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (n % i == 0 && i > 1)
		return (0);
	else if ((n / i) < i)
		return (1);
	else
		return (check_prime(n, i + 1));
}
