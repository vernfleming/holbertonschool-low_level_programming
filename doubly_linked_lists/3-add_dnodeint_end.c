#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node to end of doubly linked list
 *
 * @head: pointer to first node in doubly linked list
 * @n: data to be stored in list
 * Description: adds node to the end of doubly linked list
 *
 * Return: address of new node or NULL if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
dlistint_t *curr_node;

if (!new_node)
return (NULL);
new_node->prev = NULL;
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
return (*head = new_node);
curr_node = *head;
while (curr_node->next != NULL)
curr_node = curr_node->next;
curr_node->next = new_node;
new_node->prev = curr_node;
return (new_node);
}
