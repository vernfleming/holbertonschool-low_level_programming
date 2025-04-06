#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: head of the linked list
 * @str: string to store in node
 *
 * Description: as above
 * Return: address of new start node or NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	list_t *curr_node;
	int str_len = 0;
	
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	while (str[str_len] != '\0')
		str_len++;
	new_node->len = str_len;
	new_node->next = NULL;
	if (*head == NULL)
		return (*head = new_node);
	curr_node = *head;
	while (curr_node->next != NULL)
		curr_node = curr_node->next;
	curr_node->next = new_node;
	return (new_node);
}
