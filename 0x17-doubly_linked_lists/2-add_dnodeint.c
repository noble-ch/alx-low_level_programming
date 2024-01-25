#include "lists.h"

/**
 * add_dnodeint - function
 * @n: node data
 * @head: linked list head
 *
 * Return: the address of the new element
 *	   NULL if fuction fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
