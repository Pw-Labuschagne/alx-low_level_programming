#include "lists.h"
/**
 * free_listint - Frees a list
 * @head: Pointer to list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
listint_t *frees;

while (head != NULL)
{
frees = head;
head = head->next;
free(frees);
}
}
