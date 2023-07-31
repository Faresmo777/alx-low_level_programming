#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a
 * listint_t linked list.
 *
 * @head: The pointer to the pointer to the head of the list.
 * @idx: The index of the list where the new node should be added, starting at 0.
 * @n: The data (n) of the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

	listint_t *temp = *head;
	unsigned int i = 0;

	while (i < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	if (i != idx - 1 || temp == NULL)
		return (NULL);

	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
