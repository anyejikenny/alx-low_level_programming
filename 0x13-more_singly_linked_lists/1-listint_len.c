#include "lists.h"
/**
 * @h: linkd list of type listint_t to traverse
 * listint_len - returns the num of elements in a linked lists
 * Return: num of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
