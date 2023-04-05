#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a list
 * @h: pointer to head pointer
 *
 * Return: size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *nxt;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	*h = NULL;

	while (current != NULL)
	{
		nxt = current->next;
		free(current);
		count++;
		if (nxt >= current)
			break;
		current = nxt;
	}
	return (count);
}
