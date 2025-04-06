#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_dlistint - prints the elements of a doubly linked list
 *
 * @h: pointer to head of list
 *
 * Description: as above
 * Return: total number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
int count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
