#include "lists.h"
#include <stdio.h>

/**
 * listint_len - retunrs te number of elements
 * @h: pointer to the head of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
