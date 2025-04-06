#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - deletes node at a specific index
 *
 * @head: pointer to head of the doubly linked  list
 * @index: where we are deleteing
 *
 * Description: as above
 *
 * Return: 1 on success or -1 for fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *curr_node = *head;
unsigned int i = 0;

while (i < index && curr_node)
{
curr_node = curr_node->next;
i++;
}
if (!curr_node || i != index)
return (-1);
if (*head == curr_node)
{
*head = curr_node->next;
if (curr_node->next != NULL)
curr_node->next->prev = NULL;
}
if (curr_node->prev != NULL)
curr_node->prev->next = curr_node->next;
if (curr_node->next != NULL)
curr_node->next->prev = curr_node->prev;
free(curr_node);
return (1);
}
