#include "monty.h"
#include <stdio.h>
/**
 * Globale data - collection of data instance
 */
data_t data;

/**
 * main - main function
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: (Success) EXIT_SUCCESS
 * ------- (Fail) EXIT_FAILURE
 */
int main(int ac, char **av)
{
	ssize_t n_read = 1;
	size_t length = 0;
	stack_t *stack = NULL;

	memset((void *) &data, 0, sizeof(data));
	if (ac != 2)
		push_error(12);
	data.filename = av[1];
	data.fp = fopen(data.filename, "r");
	if (data.fp == NULL)
		push_error(14);
	while ((n_read = getline(&data.line, &length, data.fp)) > 0)
	{
		if (*data.line == '\n')
			continue;
		data.line_number++;
		free(data.args);
		if (split_line() < 0)
			continue;
		if (*data.args == NULL)
			continue;
		process_line(&stack);
	}
	free_data();
	free_dlistint(stack);
	return (EXIT_SUCCESS);
}
