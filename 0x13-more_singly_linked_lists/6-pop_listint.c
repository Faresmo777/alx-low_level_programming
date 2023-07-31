#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list and
 * returns its data (n).
 *
 * @head: The pointer to the pointer to the head of the list.
 *
 * Return: The data (n) of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	*head = (*head)->next;
	free(*head);

	return (data);
}
