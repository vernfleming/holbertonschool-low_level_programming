#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees memory from a doubly linked list
 *
 * @head: pointer to head of the doubly linked list
 * Description: frees memory from a doubly linked list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
if (head == NULL)
return;
free_dlistint(head->next);
free(head);
}
