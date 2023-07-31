#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at the specified index in a
 * listint_t linked list.
 *
 * @head: The pointer to the pointer to the head of the list.
 * @index: The index of the node to delete, starting at 0.
 *
 * Return: 1 if the deletion succeeded, or -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	listint_t *temp = *head;
	listint_t *prev = NULL;
	unsigned int i = 0;

	while (i < index && temp != NULL)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}

	if (i != index || temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);
}
