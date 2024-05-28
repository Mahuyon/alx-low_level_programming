#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no.
 */
void free_listint2(listint_t **head)
{
	listint_t *eko;
	listint_t *eya;

	if (head != NULL)
	{
		eya = *head;
		while ((eko = eya) != NULL)
		{
			eya = eya->next;
			free(eko);
		}
		*head = NULL;
	}
}

