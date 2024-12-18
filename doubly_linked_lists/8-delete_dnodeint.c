#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 * Description: deletes the node at index index of a dlistint_t linked list
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	if (current->next != NULL)
		current->next->prev = current->prev;

	if (current->prev != NULL)
		current->prev->next = current->next;

	free(current);
	return (1);
}
