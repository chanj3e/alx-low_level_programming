#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints
 * @h: pointer
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		b++;
	}
	return (b);
}
