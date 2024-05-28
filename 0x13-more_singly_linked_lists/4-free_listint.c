#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list.
 *
 * Return: no.
 */
void free_listint(listint_t *head)
{
	listint_t *eko;

	while ((eko = head) != NULL)
	{
		head = head->next;
		free(eko);
	}
}

