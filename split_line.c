#include "monty.h"

#define DELIMITER " \n\t\a"
/**
 * split_line - splits line to tokens
 *
 * Return: (Success) a positive number
 * ------- (Fail) a negative number
 */
int split_line(void)
{
	char *token;
	size_t size = 4, new_size, i = 0;

	data.args = malloc(size * sizeof(char *));
	if (data.args == NULL)
		push_error(11);
	token = strtok(data.line, DELIMITER);
	while (token)
	{
		data.args[i++] =  token;
		if (i >= size)
		{
			new_size = size * 2;
			data.args = _realloc(data.args, size * sizeof(char *),
					new_size * sizeof(char *));
			if (data.args == NULL)
				push_error(11);
			size = new_size;
		}
		token = strtok(NULL, DELIMITER);
	}
	data.args[i] = NULL;
	if (**data.args == '#')
		return (-1);
	return (0);
}
#undef DELIMITER

