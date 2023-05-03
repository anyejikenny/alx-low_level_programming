#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked lst
 * @head: the pointer to d 1st element in d linked lst
 * Return: the data inside the elements that was deleted,
 * or 0 if d list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
