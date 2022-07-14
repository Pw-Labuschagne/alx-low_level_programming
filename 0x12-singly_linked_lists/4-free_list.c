#include "lists.h"
/**
 * free_list - Frees a list used by malloc
 * @head: Pointer to list_t start
 * Return: nothing
 */
void free_list(list_t *head)
{
list_t *frees;
for (frees = head; frees != NULL; frees = frees->next)
{
free(frees->str);
free(frees);
}
}
