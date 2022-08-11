#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h->str ? printf("[%d] %s\n", h->len, h->str) :
			printf("[0] (nil)\n");
		h = h->next;
	}

	return (count);
}
