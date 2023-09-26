#include "lists.h"

/**
 * sum_listint - sum of all data in the linked list
 * @head: head nodo
 *
 * Return: suma
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}

