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
char *temp = NULL;
struct list_s *c = NULL;
struct list_s *ptr = malloc(sizeof(list_t *));

temp = (char *)str;
ptr->str = temp;
ptr->next = NULL;

while (temp[i] != '\0')
{
	i++;
}

ptr->len = i;

if (ptr->str == NULL)
{
	return (0);
}

ptr->next = *head;
*head = ptr;
c = *head;

return (c);
}
