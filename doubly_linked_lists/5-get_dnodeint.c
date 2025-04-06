#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - finds a node for a specific index
 *
 * @head: pointer to head of the doubly linked list
 * @index: location of the node you want
 *
 * Description: iterate nodes until the index
 *
 * Return: node or NULL if fail
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *curr_node = head;

if (head == NULL)
return (NULL);
while (i < index)
{
if (curr_node->next == NULL)
return (NULL);
curr_node = curr_node->next;
i++;
}
return (curr_node);
}
