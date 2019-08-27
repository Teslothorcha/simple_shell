#include "holberton.h"
/**
 *s_strdup - duplicate a string
 *@s: string to be copied
 *Return: Pointer to string duplicate
 */
char *s_strdup(char *s)
{
	char *duplicate  = NULL;
	size_t lenght;

	lenght = s_length(s) + 10;
	duplicate = (char *) malloc(lenght * sizeof(char));

	if (!duplicate)
		return (NULL);

	s_strcopy(duplicate, s, lenght);
	return (duplicate);
}
/**
 *s_length - determine lenght of string
 *@s: string to be meassured
 *Return: Length of string
 */
unsigned int s_length(char *s)
{
	unsigned int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
/**
 *s_strcopy - copy n bytes from one string to another
 *@dest: final string
 *@src: strign to append
 *@n: bytes to be copied
 *Return: string appended
 */
char *s_strcopy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
/**
 * _strcmpn - compares n bytes in two strings,
 * @s1: first string to compare.
 * @s2: second string to compare.
 * @n:  bytes to be compared.
 * Return: O if they are identical in n bytes
 */
int _strcmpn(char *s1, char *s2, int n)
{
	int i;

	for (i = 0; s1[i] == s2[i] && i < n; i++)
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
	}
	return (s1[i] - s2[i]);
}
/**
 *_slash - append slash and comannd to directory in linked list
 *@head: Head of the linked list
 *@command: Command entered to the shell and tokenized
 *@lim: length of idrectory inside linked list node
 *@lim2: length of command entered to shell and tokenized
 *Return: head of the node with full directory
 */
listint_t *_slash(listint_t **head, char *command, int lim, int lim2)
{
	int c1, c2;

	for (c1 = 0; c1 < lim && (*head)->dir[c1] != '\0'; c1++)
	{
		;
	}
	(*head)->dir[c1] = '/';
	c1++;

	for (c2 = 0; c2 < lim2 && command[c2] != '\0'; c2++, c1++)
		(*head)->dir[c1] = *(command + c2);

	(*head)->dir[c1] = '\0';
	return (*head);
}
