#include "lists.h"
/**
 * sum_litint - Sums all the integers in a list
 * @head: pointer to list
 * Return: Sum of list or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
		return (sum);
	}
return (0);
}
