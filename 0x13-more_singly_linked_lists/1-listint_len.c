#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 *
 * @h: The pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
