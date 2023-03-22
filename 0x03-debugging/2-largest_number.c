#include "main.h"

/**
 * largest_number - returns the largest number
 * @a: frst num
 * @b: sec num
 * @c: third num
 * Return: larget number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
