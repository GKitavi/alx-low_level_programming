#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: Size in bytes of the allocated space for ptr
 * @new_size: New size in bytes of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *pt;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	p = malloc(new_size);
	if (!p)
		return (NULL);

	pt = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = pt[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = pt[i];
	}
	free(ptr);
	return (pt);
}
