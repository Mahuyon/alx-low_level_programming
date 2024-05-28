#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *eya;
	listint_t *prev;

	eya = head;
	prev = head;
	while (head && eya && eya->next)
	{
		head = head->next;
		eya = eya->next->next;

		if (head == eya)
		{
			head = prev;
			prev =  eya;
			while (1)
			{
				eya = prev;
				while (eya->next != head && eya->next != prev)
				{
					eya = eya->next;
				}
				if (eya->next == head)
					break;

				head = head->next;
			}
			return (eya->next);
		}
	}

	return (NULL);
}

