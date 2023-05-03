#include "lists.h"
/**
 * free_listint - releases a linked lst
 * @head: listint_t lst to be released
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
