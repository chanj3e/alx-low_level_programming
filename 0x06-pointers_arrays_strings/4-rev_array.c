#include "main.h"

/**
 * reverse_array - function that reverses the content
 * @a: array
 * @n: number of element
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
