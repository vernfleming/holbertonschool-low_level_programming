#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a node at index
 *
 * @h: pointer to header of a doubly linked list
 * @idx: index to add new node
 * @n: data for new node
 *
 * Description: as above
 *
 * Return: address of new node or NULL if fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *prev_node, *curr_node = *h;
unsigned int i = 0;

if (idx == 0)
return (add_dnodeint(h, n));
while (i < idx && curr_node)
{
prev_node = curr_node;
curr_node = curr_node->next;
i++;
}
if (i != idx)
return (NULL);
if (curr_node == NULL)
return (add_dnodeint_end(h, n));
new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);
new_node->prev = curr_node->prev;
new_node->n = n;
new_node->next = curr_node;
if (curr_node->prev)
prev_node->next = new_node;
curr_node->prev = new_node;
return (new_node);
}
