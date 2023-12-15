#include "sort.h"

/**
 * swap - swaps 2 nodes
 * @h: first node
 * @hh: second node
*/
void swap(listint_t *h, listint_t *hh)
{
	if (h->prev)
		h->prev->next = hh;
	if (hh->next)
		hh->next->prev = h;
	h->next = hh->next;
	hh->prev = h->prev;
	h->prev = hh;
	hh->next = h;
}

/**
 * insertion_sort_list - sorts an array using insertion sort
 * @list: pointer to list head
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j;

	if (!list || !*list || !(*list)->next)
		return;

	i = (*list)->next;
	while (i)
	{
		j = i;
		i = i->next;
		while (j && j->prev)
		{
			if (j->prev->n > j->n)
			{
				swap(j->prev, j);
				if (!j->prev)
					*list = j;
				print_list((const listint_t *)*list);
			}
			else
				j = j->prev;
		}
	}
}
