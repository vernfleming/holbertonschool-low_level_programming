#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add node to start of doubly linked list
 *
 * @head: double pointer for head of list
 * @n: data for new node
 * Description: as above
 *
 * Return: address of new node or NULL if fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

 if (!new_node)
return (NULL);
new_node->prev = NULL;
new_node->n = n;
if (*head != NULL)
{
new_node->next = *head;
(*head)->prev = new_node;
}
else
new_node->next = NULL;
*head = new_node;
return (new_node);
}
