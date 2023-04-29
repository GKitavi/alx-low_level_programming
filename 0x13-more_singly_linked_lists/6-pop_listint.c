#include "lists.h"

/**
 * pop_listint - pops a node out
 * @head: linked list address
 *
 * Return: head node contents
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *tmp;

	if (*head == NULL)
		return (i);
	tmp = *head;
	i = tmp->n;
	free(*head);
	*head = tmp->next;

	return (i);
}
