#include "holberton.h"
/**
 * list_maker  -  add node initialize it and give it a string
 *@head: head node of linked list
 *@token: token to be insterted on list
 *@l: length of token + command + \n + '\0'
 * Return: node with string on it
 */
listint_t *list_maker(listint_t **head, char *token,  unsigned int l)
{
	listint_t *new;
	unsigned int count;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->dir = malloc(sizeof(char) * l);
	if (!new->dir)
		return (NULL);

	for (count = 0; count < l; count++)
	{
		new->dir[count] = 0;
	}

	for (count = 0; token[count] != '\0'; count++)
	{
		new->dir[count] = token[count];
	}
	new->next = *head;
	*head = new;

	return (*head);
}
/**
 *free_list - free list and sets head to NULL
 *@head: - pointer to the head of the list
 */
void free_list(listint_t **head)
{
	listint_t *temp;

	while (head  && *head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp->dir);
		free(temp);
	}
}
/**
 *listint_len - list nodes of a list
 *@h: - pointer to the head of the list
 *Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int  counter;

	counter = 0;
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h)
		{
			h = h->next;
			counter++;
		}
	}
	return (counter);
}
