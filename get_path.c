#include "holberton.h"
/**
 * get_path - will searh if command exist on any of PATH's directories
 *@arr: Array of tokenized command and arguments.
 *@cadena: string before being tokenized, to be freed.
 *@counte: Counter of shell being prompmted, to be use for error message.
 *@av: array of arguments, to be use on error message.
 */
void get_path(char **arr, char *cadena, int counte, char **av)
{
	unsigned int i = 0, len = 0, match, countpat = 0, l = 0, lc = 0, ld = 0;
	listint_t *head;
	char *s1  = "PATH\0", *token;

	len = s_length(s1);
	head = NULL;
	while (environ[i] != NULL)
	{
		match = _strcmpn(environ[i], s1, len - 1);
		if (match == 0)
		{
			token = strtok(environ[i], DELIM);
			while (token != NULL)
			{
				if (countpat != 0)
				{
					lc = s_length(arr[0]);
					l = s_length(token) + lc + 2;
					list_maker(&head, token, l);
					ld = s_length(head->dir);
					_slash(&head, arr[0], ld, lc);
					exec_path(&head, arr);
					free_listint(&head);
				}
				token = strtok(NULL, DELIM);
				countpat++;
			}
		}
		i++;
	}
	current_path(arr);
	free(cadena);
	error_message(arr, counte, av);
	free_em_all(arr);
	exit(EXIT_SUCCESS);
}
