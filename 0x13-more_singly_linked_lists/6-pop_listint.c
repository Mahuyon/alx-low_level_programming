#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data or 0.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *eya;

	if (*head == NULL)
		return (0);

	eya = *head;

	hnode = eya->n;

	h = eya->next;

	free(eya);

	*head = h;

	return (hnode);
}

