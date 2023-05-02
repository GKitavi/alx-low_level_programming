#include "lists.h"

/**
 * pop_listint - pops the head node
 * @head: node head
 *  
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *tmp;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (i);
}
