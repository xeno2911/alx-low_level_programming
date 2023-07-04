#include "lists.h"

/**
 * print_listint - Prints linked lists
 * @h: Pointer to the first node
 *
 * Return: Size of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
