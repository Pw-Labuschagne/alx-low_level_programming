#include "lists.h"
/**
 * add_node - adds node to the begining of the list
 * @head: The pointer to the first node
 * @str: String to be added to list
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
unsigned int i = 0;
list_t *ptr = malloc(sizeof(list_t *));

if (head == NULL);
{
	return (0);
}

if (str == NULL)
{
	ptr->str = NULL;
	ptr->len = 0;
	ptr->next = *head;
}

ptr->str = strdup(str);
ptr->next = NULL;

while (str[i] != '\0')
{
	i++;
}

ptr->len = i;

if (ptr == NULL)
{
	return (0);
}

ptr->next = *head;
*head = ptr;

return (ptr);
}
