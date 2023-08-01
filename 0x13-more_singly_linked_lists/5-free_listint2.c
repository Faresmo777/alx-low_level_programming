/**
 * free_listint2 - Frees a linked list and sets the head to NULL.
 * @head: A pointer to a pointer to the head node of the linked list.
 *
 * This function frees the memory occupied by a linked list of integers by
 * deallocating each node in the list. It also sets the head pointer to NULL
 * to indicate that the list is now empty. If the head pointer is NULL to begin
 * with, the function simply returns without doing anything.
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return;

	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
