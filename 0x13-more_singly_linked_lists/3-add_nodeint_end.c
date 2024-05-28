#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element or NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *eko;
	listint_t *eya;

	(void)eya;

	eko = malloc(sizeof(listint_t));

	if (eko == NULL)
		return (NULL);

	eko->n = n;
	eko->next = NULL;
	eya = *head;
	if (*head == NULL)
	{
		*head = eko;
	}
	else
	{
		while (eya->next != NULL)
		{
			eya = eya->next;
		}
		eya->next = eko;
	}

	return (*head);
}

