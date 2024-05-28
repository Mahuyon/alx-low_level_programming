#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *eko;
	listint_t *eya;

	eko = NULL;
	eya = NULL;

	while (*head != NULL)
	{
		eya = (*head)->next;
		(*head)->next = eko;
		eko = *head;
		*head = eya;
	}

	*head = eko;
	return (*head);
}

