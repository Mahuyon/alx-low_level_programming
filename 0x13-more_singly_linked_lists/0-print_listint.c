#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t eko = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		eko += 1;
		cursor = cursor->next;
	}
	return (eko);
}

