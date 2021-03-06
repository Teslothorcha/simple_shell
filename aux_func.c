#include "holberton.h"
/**
 * handler - handles ctrl +c signal
 * @sig: signal to handle
 *
 * Return: void
 */
void handler(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n$ ", 3);
}
/**
 *exec_path - check if executable exists on directory
 *@head: head of linked list where directory string is
 *@commands: array o arguents for the command
 */
void exec_path(listint_t **head, char **commands)
{
	struct stat st;
	int success;

	success = stat((*head)->dir, &st);

	if (success == 0)
	{
		execve((*head)->dir, commands, NULL);
	}
}
/**
 *current_path - check if executable exists on directory
 *@arr: double pointer with possible executbale on it
 */
void current_path(char **arr)
{
	struct stat st;
	int success;

	success = stat(arr[0], &st);

	if (success == 0)
	{
		execve(arr[0], arr, NULL);
	}
}
