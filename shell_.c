#include "holberton.h"
/**
 *main - The GATES OF SHELL!!
 *@av: array of variadic arguments
 *@ac: amount of variadic arguments
 *Return: 0 on success
 */
int main(__attribute__ ((unused))int ac, char **av)
{
	ssize_t bytes_l;
	size_t numero_bytes;
	char *cadena;
	int l_ex = 0;
	int counte = 0;

	numero_bytes = 0;
	cadena = NULL;
	l_ex = s_length(EXIIT);
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, PROMPT, 2);
	signal(SIGINT, handler);
	while ((bytes_l = getline(&cadena, &numero_bytes, stdin) != EOF))
	{
		counte++;

		if (_strcmpn(EXIIT, cadena, l_ex - 1) == 0)
			break;

		shell_1(&cadena, counte, av);

		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, PROMPT, 2);

		numero_bytes = 0;
		free(cadena);
		cadena = NULL;
	}
	free(cadena);
	return (EXIT_SUCCESS);
}
