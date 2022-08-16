#include "lists.h"

/**
 * free_listint2 - frees the listint_t list
 * @head: a pointer to the address of the head
 * Return: sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = head;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head == NULL;
}
