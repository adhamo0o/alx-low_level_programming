#include "lists.h"
/**
 * sum_listint - fun return the sum of elements
 * @head: pointer to the first element
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int i, sum = 0;
	listint_t *ptr;

	if (head == NULL)
		return (0);

	ptr = head;

	for (i = 0; ptr != NULL; i++)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
