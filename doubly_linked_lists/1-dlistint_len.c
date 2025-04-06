#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * dlistint_len - returns number of elements in doubly linked list
 *
 * @h: pointer to the head of a doubly linked list
 * Description: returns number of elements of a DLL
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
int count = 0;
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
