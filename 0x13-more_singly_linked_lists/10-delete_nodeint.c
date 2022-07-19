#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes a node at pointed index
 * @head: The pointer to the list
 * @index: place where the node should be deleted
 * Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *c = *head, *p = *head;


if (*head == NULL)
{
	return (-1);
}
if (c == NULL || p == NULL)
{
	return (-1);
}

if (index == 0)
{
	*head = c->next;
	free(c);
	c = NULL;
	return (1);
}

index--;
while (i < index)
{
	if (p == NULL || c == NULL)
	{
		return(-1);
	}
	p = c;
	c = c->next;
	i++;
}
p->next = c->next;
free(c);
c = NULL;

return (1);
}
