#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of the list
 * @head: pointer to the address of the head of the list
 * @n: integer  the new node will contain
 * Return: the address of the new element
 * elase if failed, NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	ptr = *head;
	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;

	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return (*head);
}
