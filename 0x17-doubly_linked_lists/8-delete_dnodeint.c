#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *eko;
	dlistint_t *eya;
	unsigned int i;

	eko = *head;

	if (eko != NULL)
		while (eko->prev != NULL)
			eko = eko->prev;

	i = 0;

	while (eko != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = eko->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				eya->next = eko->next;

				if (eko->next != NULL)
					eko->next->prev = eya;
			}

			free(eko);
			return (1);
		}
		eya = eko;
		eko = eko->next;
		i++;
	}

	return (-1);
}
