# README file

Task 0: 0-print_listint.c: C function that prints all the elements of a listint_t linked list.
Returns the number of nodes in the listint_t list.

Task 1: 1-listint_len.c: C function that returns the number of elements in a listint_t linked list.

Task 2: 2-add_nodeint.c: C function that adds a new node at the beginning of a listint_t linked list.
If the function fails - returns NULL.
Otherwise - returns the address of the new element.

Task 3: 3-add_nodeint_end.c: C function that adds a new node at the end of a listint_t linked list.
If the function fails - returns NULL.
Otherwise - returns the address of the new element.

Task 4: 4-free_listint.c: C function that frees a listint_t linked list.

Task 5: 5-free_listint2.c: C function that frees a listint_t linked list.
Sets the head to NULL.

Task 6: 6-pop_listint.c: C function that deletes the head node of a listint_t linked list.
If the linked list is empty - returns 0.
Otherwise - returns the head node's data (n).

Task 7: 7-get_nodeint.c: C function that locates a given node of a listint_t linked list.
If the node does not exist - returns NULL.
Otherwise - returns the located node.

Task 8: 8-sum_listint.c: C function that returns the sum of all the data (n) of a listint_t linked list.
If the linked list is empty - returns 0.
Otherwise - returns the sum of all the data (n).

Task 9: 9-insert_nodeint.c: C function that inserts a new node to a listint_t linked list at a given position.
If it is not possible to add the new node at index idx, or the function fails - returns NULL.
Otherwise - returns the address of the new node.

Task 10: 10-delete_nodeint.c: C function that deletes the node at a given index of a listint_t linked list.
If the function succeeds - returns 1.
If the function fails - returns -1.

Task 11: 100-reverse_listint.c: C function that reverses a listint_t linked list using a maximum of one loop and two variables.
Returns a pointer to the first node of the reversed list.

Task 12: 101-print_listint_safe.c: C function that prints a listint_t linked list safely (ie. can free lists containing loops).
Returns the number of nodes in the listint_t list.

Task 13: 102-free_listint_safe.c: C function that frees a listint_t linked list safely (ie. can free lists containing loops).
Returns the size of the list that was freed.
Sets the head to NULL.

Task 14: 103-find_loop.c: C function that finds the loop contained in a listint_t linked list using a maximum of two variables.
If no loop is found - returns NULL.
Otherwise - returns the address of the node where the loop starts.
