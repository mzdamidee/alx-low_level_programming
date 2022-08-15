#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: a pointer to the address of the head of the list
 * @n: the integer for the new  node to add
 * Return: address of the new node
 * else if it fails, NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	ptr->n = n;

	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
