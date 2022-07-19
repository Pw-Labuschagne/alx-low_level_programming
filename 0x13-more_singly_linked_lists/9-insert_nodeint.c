#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a node at index
 * @head: Pointer to list
 * @idx: Point where to be inserted
 * @n: integer to insert
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int c = 0;
listint_t *move = *head;
listint_t *new = malloc(sizeof(listint_t));


if (new == NULL || move == NULL)
{
	return (0);
}
new->n = n;
new->next = NULL;

if (idx == 0)
{
	new->next = move;
	*head = new;
	return (new);
}

idx--;
while (c < (idx - 1))
{
	if (new == NULL || move == NULL)
	{
		return (0);
	}
	move = move->next;
	c++;
}
new->next = move->next;
move->next = new;

return (new);
}

