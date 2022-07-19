#include "lists.h"
/**
 * get_nodeint_at_index - Gets a node at given index
 * @head: pointer to list
 * @index: Place to get the node
 * Return: address of node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

while (i < (index + 1))
{
	head = head->next;
	i++;
}
if (head == NULL)
{
	return (0);
}
return (head);
}
