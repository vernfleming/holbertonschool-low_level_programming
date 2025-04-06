#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - sum of data in doubly linked list
 *
 * @head: pointer to first node of list
 * Description: as above
 *
 * Return: sum of values or NULL
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (head == NULL)
return (0);
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
