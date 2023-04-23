#include "sort.h"

/**
 * insertion_sort_list - sorts a Duubly linked list
 * ascending order using the insertion sort algorithm
 * @list: doubly linked list
 *
 * Return: no return
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *p, *tmp;

	if (!list)
		return;

	p = *list;
	while (p)
	{
		while (p->next && (p->n > p->next->n))
		{
			tmp = p->next;
			p->next = tmp->next;
			tmp->prev = p->prev;

			if (p->prev)
				p->prev->next = tmp;
			if (tmp->next)
				tmp->next->prev = p;
			p->prev = tmp;
			tmp->next = p;

			if (tmp->prev)
				p = tmp->prev;
			else
				*list = tmp;
			print_list(*list);
		}
		p = p->next;
	}
}
