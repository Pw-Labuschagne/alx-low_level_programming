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

listint_t *move = *head;
listint_t *new = malloc(sizeof(listint_t));

new->n = n;
new->next = NULL;

if (new == NULL || *head == NULL)
{
	return (0);
}

idx--;
while (idx != 1)
{
	move = move->next;
	idx--;
}
new->next = move->next;
move->next = new;

return (new);
}

