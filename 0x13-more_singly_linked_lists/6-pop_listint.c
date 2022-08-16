#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A poiner to the address of the heado t list
 * Return: 0 if the inkis empty
 * else the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
