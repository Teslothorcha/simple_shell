#include "holberton.h"
/**
 *error_message - compose the standar error message
 *@arr: double pointer with tokenized command
 *@av: double pointer with arguments from input
 *@counte: counter of times shell has had prompted
 */
void error_message(char **arr, int counte, char **av)
{
	int multi = 1, length = 1, copy;

	write(STDERR_FILENO, av[0], s_length(av[0]));
	write(STDERR_FILENO, ": ", 2);

	copy = counte;

	while (copy >= 10)
	{
		copy /= 10;
		multi *= 10;
		++length;
	}
	while (length > 1)
	{
		if ((counte / multi) < 10)
			error_helper((counte / multi + '0'));
		else
			error_helper((counte / multi) % 10 + '0');
		--length;
		multi /= 10;
	}
	error_helper(counte % 10 + '0');
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, arr[0], s_length(arr[0]));
	write(STDERR_FILENO, ": not found\n", 12);
}
/**
 *error_helper - sends char to write
 *@helper: char to be printed
 *Return: to print
 */
int error_helper(char helper)
{
	return (write(STDERR_FILENO, &helper, 1));
}
