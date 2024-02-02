#include "lists.h"

/**
 * list_len - returns elements in a linked list
 *
 * Return; number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
