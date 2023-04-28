#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - length of list_t
 * @h: head node
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
