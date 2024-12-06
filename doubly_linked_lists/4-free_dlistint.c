#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the list
 * Return: void
 * Description: frees a dlistint_t list
 */

void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;

    while (head)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    head = NULL;
}
