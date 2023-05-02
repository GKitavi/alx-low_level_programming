#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Counts number of nodes in a loop
 * @head: pointer to the head
 *
 * Return: 0 if the list is not looped, otherwise number.
 */
size_t looped_listint_len(const listint_t *head)
{
	size_t nodes = 1;
	const listint_t *i, *j;

	if (head == NULL || head->next == NULL)
		return (0);

	i = head->next;
	j = (head->next)->next;

	while (j)
	{
		if (i == j)
		{
			i = head;
			while (i != j)
			{
				nodes++;
				i = i->next;
				j = j->next;
			}

			i = i->next;
			while (i != j)
			{
				nodes++;
				i = i->next;
			}

			return (nodes);
		}

		i = i->next;
		j = (j->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list
 * @head: pointer to the head
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	size_t i = 0;

	n = looped_listint_len(head);

	if (n == 0)
	{
		for (; head != NULL; n++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (n);
}
