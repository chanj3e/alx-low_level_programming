#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array
 * @min: minimum range stored
 * @max: maxmimum range stored
 * Return: pionter to new array
 */
int *array_range(int min, int max)
{
	int *ptr, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
