#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list to be freed
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current_node, *next_node;

	for (current_node = head; current_node != NULL; current_node = next_node)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node);
	}
}
