#include "lists.h"

/**
* add_nodeint - adds a node to the start of the list
* @head: address of pointer to head node
* @n: str field of node
*
* Return: size of list
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));

	if (!head || !new_head)
		return (NULL);

	new_head->next = NULL;
	new_head->n = n;
	if (*head)
		new_head->next = *head;
	*head = new_head;
	return (new_head);
}
