#include "lists.h"

/**
* add_nodeint_end - adds a node to the bottom of the list
* @head: address of pointer to first node
* @n: new node
*
* Return: pointer to new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !new_head)
		return (NULL);

	new_head->next = NULL;
	new_head->n = n;
	if (!*head)
		*head = new_node;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	return (new_node);
}
