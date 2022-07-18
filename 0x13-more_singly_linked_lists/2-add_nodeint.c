#include "lists.h"
/**
 * add_nodeint - Adds a integer to a list.(beginning)
 * @head: pointer to list
 * @n: Integer to add
 * Return: addres of node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *ptr = malloc(sizeof(listint_t));
ptr->n = n;
ptr->next = NULL;

if (head == NULL)
	{
		return (NULL);
	}

ptr->next = *head;
*head = ptr;
return (ptr);
}
