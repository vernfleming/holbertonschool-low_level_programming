#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds new node at the start of a list_t list
 * @head: pointer to pointer of first node
 * @str: string to store in new node
 *
 * Return: address of new element, or NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;

	if (head == NULL || str == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(dup_str);
		return (NULL);
	}

	new_node->str = dup_str;
	new_node->len = strlen(dup_str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
