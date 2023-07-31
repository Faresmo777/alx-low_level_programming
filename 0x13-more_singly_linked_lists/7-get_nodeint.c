#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 *
 * @head: The pointer to the head of the list.
 * @index: The index of the node to return, starting at 0.
 *
 * Return: The pointer to the nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;

	while (index > 0 && temp != NULL)
	{
		temp = temp->next;
		index--;
	}

	if (index == 0 && temp != NULL)
		return (temp);

	return (NULL);
}
