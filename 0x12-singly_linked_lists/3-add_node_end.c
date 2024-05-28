#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head or null.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *eya, *temp;
	size_t eko;

	eya = malloc(sizeof(list_t));
	if (eya == NULL)
		return (NULL);

	eya->str = strdup(str);
	for (eko = 0; str[eko]; eko++)
		;
	eya->len = eko;
	eya->next = NULL;
	temp = *head;									
	if (temp == NULL)
	{
		*head = eya;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = eya;
	}
	return (*head);
}
