#include "monty.h"
/**
 * process_line - process and parse line
 * @stack: the stack
 *
 * Return: integer
 */
int process_line(stack_t **stack)
{
	instruction_t inst[] = {
		{"push", add_dnodeint},
		{"pall", print_dlistint},
		{"pint", print_top},
		{"pop", pop_top},
		{"swap", swap_top},
		{"nop", nothing},
		{"add", add_top_two},
		{"sub", sub_top_two},
		{"div", div_top_two},
		{"mul", mul_top_two},
		{"mod", mod_top_two},
		{NULL, NULL}
	};
	int i = 0;

	while ((inst + i)->opcode)
	{
		if (strcmp((inst + i)->opcode, *data.args) == 0)
		{
			(inst + i)->f(stack, data.line_number);
			return (0);
		}
		i++;
	}
	push_error(15);
	return (1);
}
