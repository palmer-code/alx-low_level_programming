#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head pointer
 * @index: index of node to be deleted
 *
 * Return: 1 if succesful -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;

	current = *head;
	prev = *head;

	if (current == NULL)
		return (-1);

	if (head == NULL || *head == NULL)
		return (-1);

	else if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	else
	{
		while (index != 0)
		{
			prev = current;
			current = current->next;
			index--;
		}
		prev->next = current->next;
		free(current);
		return (1);
	}
}
