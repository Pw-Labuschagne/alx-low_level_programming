#include "lists.h"
/**
 * free_list - Frees a list used by malloc
 * @head: Pointer to list_t start
 * Return: nothing
 */
void free_list(list_t *head)
{
free(head);
}
