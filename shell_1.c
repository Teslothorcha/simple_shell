#include "holberton.h"
/**
 *shell_1 - part two of main function
 *@cadena: strign to be tokenized
 *@counte: to be used on error message
 *@av: double pointer of argument entered to shell
 *
 */
void shell_1(char **cadena, int counte, char **av)
{
	struct stat fstat;
	int status, l_en = 0;
	pid_t child;
	char **arr;

	l_en = s_length(ENVV);
	arr = tokens(*cadena);
	child = fork();
	if (child == -1)
	{
		perror("Error:");
		exit(EXIT_FAILURE);
	}
	if (child == 0)
	{
		if (arr[0] == NULL)
		{
			free_em_all(arr);
			free(*cadena);
			exit(EXIT_SUCCESS);
		}
		if (_strcmpn(ENVV, arr[0], l_en) == 0)
			print_env(*cadena, arr);

		else if (stat(arr[0], &fstat) == 0)
			execve(arr[0], arr, NULL);

		get_path(arr, *cadena, counte, av);
	}
	else
	{
		wait(&status);
		free_em_all(arr);
	}
}
