#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node to the begining of a linked list
 *
 * @head: head of our linked list
 * @str: string to be stored in node
 *
 * Description: as above
 * Return: address of new start node or NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	int str_len = 0;
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	while (str[str_len] != '\0')
		str_len++;
	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
