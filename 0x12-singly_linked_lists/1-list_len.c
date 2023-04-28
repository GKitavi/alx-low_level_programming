#include "lists.h"
#include <stdlib.h>

/**
 * list_len - length of list
 * @h: head node
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
