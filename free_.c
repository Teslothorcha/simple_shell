#include "holberton.h"
/**
 *free_em_all - will free double pointer
 *@tokenizeed: pointer to be freed
 *
 */
void free_em_all(char **tokenizeed)
{
	int count = 0;

	if (!tokenizeed)
		return;
	while (tokenizeed[count])
	{
		free(tokenizeed[count]);
		count++;
	}
	if (tokenizeed[count] == NULL)
		free(tokenizeed[count]);
	free(tokenizeed);
}

/**
 * print_env - prints all of the environment variables to the output
 * @cadena: string to be freed
 * @arr: double pointer to be freed
 * Return: void
 */
void print_env(char *cadena, char **arr)
{
	unsigned int count, length;

	count = 0;

	free(cadena);
	free_em_all(arr);

	while (environ[count])
	{
		length = s_length(environ[count]);

		write(STDOUT_FILENO, environ[count], length);
		write(STDOUT_FILENO, "\n", 1);
		++count;
	}

	exit(EXIT_SUCCESS);
}
/**
 *free_listint - free list and sets head to NULL
 *@head: - pointer to the head of the list
 */
void free_listint(listint_t **head)
{
	listint_t *temp;

	while (head  && *head != NULL)
	{
		temp = *head;
		free((*head)->dir);
		*head = (*head)->next;
		free(temp);
	}
}
