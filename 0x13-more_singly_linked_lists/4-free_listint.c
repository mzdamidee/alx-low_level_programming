#include "lists.h"

/**
 * free_listint - fress a listint_t list
 * @head: pointer to the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
