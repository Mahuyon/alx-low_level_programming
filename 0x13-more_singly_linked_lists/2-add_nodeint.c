#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element or NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *eko;

	eko = malloc(sizeof(listint_t));

	if (eko == NULL)
		return (NULL);

	eko->n = n;
	eko->next = *head;
	*head = eko;

	return (*head);
}
