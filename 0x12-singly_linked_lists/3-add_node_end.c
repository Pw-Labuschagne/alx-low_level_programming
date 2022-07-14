#include "lists.h"
/**
 * add_node_end - Adds node to the end of list
 * @head: Pointer to list
 * @str: string to be added
 * Return: Address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
unsigned i = 0;
list_t *ptr = malloc(sizeof(list_t));
list_t *temp = malloc(sizeof(list_t));

if (str == NULL || ptr == NULL)
{
	return (0);
}

while (str[i] != '\0')
{
	i++;
}

if (*head == NULL)
{
*head = ptr;
ptr->len = i;
ptr->next = NULL;
ptr->str = strdup(str);

return (ptr);
}

temp = *head;

while (temp->next != NULL)
{
	temp = temp->next;
}
temp->next = ptr;
ptr->str = strdup(str);
ptr->next = NULL;
ptr->len = i;

return (ptr);
}
