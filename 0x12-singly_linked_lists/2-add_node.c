#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head or null.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *eya;
	size_t eko;

	eya = malloc(sizeof(list_t));
	if (eya == NULL)
		return (NULL);

	eya->str = strdup(str);
	for (eko = 0; str[eko]; eko++)
		;

	eya->len = eko;
	eya->next = *head;
	*head = eya;
	return (*head);
}
