#include "monty.h"
/**
 * add_top_two - adds the top two elements
 * @stack: the stack
 * @line_number: the line number
 *
 * Return: void
 */
void add_top_two(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	(void) line_number;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		push_error(20);
		return;
	}
	tmp = *stack;
	tmp->next->n += tmp->n;
	tmp->next->prev = NULL;
	*stack = tmp->next;
	free(tmp);
}
