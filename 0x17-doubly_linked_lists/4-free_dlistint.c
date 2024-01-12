#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 * Return: no
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *eya;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((eya = head) != NULL)
	{
		head = head->next;
		free(eya);
	}
}
