#include "lists.h"

/**
 * sum_listint - lists sum of linked list
 * @head: node head
 *
 * Return: sum value
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
