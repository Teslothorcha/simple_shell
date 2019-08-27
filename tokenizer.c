#include "holberton.h"
/**
 *tokens - Divide a string with delimiter into tokens
 *@shell_input: string to be tokenized
 *Return: double pointer with tokens on it
 */
char **tokens(char *shell_input)
{
	const char s[3] = "\n ";
	char *tok, *shincopy, **tokenized;
	size_t  count = 0, tokens = 0;

	if (!shell_input)
		return (NULL);

	shincopy = s_strdup(shell_input);
	tok = strtok(shincopy, s);

	while (tok)
	{
		tokens++;
		tok = strtok(NULL, s);
	}

	free(shincopy);

	tok = strtok(shell_input, s);
	tokenized = malloc(sizeof(char *) * (tokens + 1));
	if (!tokenized)
		return (NULL);
	count = 0;
	while (tok != NULL)
	{
		tokenized[count] = malloc(sizeof(char) * s_length(tok) + 1);
		if (!tokenized[count])
		{
			free_em_all(tokenized);
			return (NULL);
		}
		s_strcopy(tokenized[count], tok, s_length(tok) + 1);
		tok = strtok(NULL, s);
		count++;
	}
	tokenized[count] = NULL;
	return (tokenized);
}
