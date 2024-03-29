#include "sort.h"

/**
 * insertion_sort_list - implemetnation of insertion sort in
 * a doubly linked list
 * @list: a pointer to the head of the list to be sorted
 */
void insertion_sort_list(listint_t **list)
{

	listint_t *current = *list, *prev_tmp = NULL, *prev = NULL;

		while (current)
	{
		prev = current->prev;
		/*move the current element some steps back until in position*/
		while (1)
		{
			if (!prev)
				break;
			if (current->n > prev->n)
				break;
			/*swap the two nodes if they are out of order*/
			if (current->next)
				current->next->prev = prev;
			prev->next = current->next;
			current->next = prev;
			prev_tmp = prev->prev;
			prev->prev = current;
			current->prev = prev_tmp;
			if (prev_tmp)
				prev_tmp->next = current;
			else
				*list = current;
			/*once the swap is done swap the names*/
			prev_tmp = prev;
			prev = current;
			current = prev_tmp;
			print_list(*list);
			/*
			 * go back one step so that the newly swaped(went to left) value
			 * will be your current and make sure it isn't smaller than
			 * the value in its left
			 */
			prev = prev->prev;
			current = current->prev;
		}
		current = current->next;
	}
}
