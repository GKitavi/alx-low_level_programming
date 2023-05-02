#include "lists.h"

/**
 * free_listint_safe - frees a listint list
 * @h: pointer to head
 *
 * Return: list size
 */
size_t free_listint_safe(listint_t **h)
{
	int i;
	listint_t *tmp;
	size_t len = 0;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
