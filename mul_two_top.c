#include "monty.h"
/**
 * mul_top_two - adds the top two elements
 * @stack: the stack
 * @line_number: the line number
 *
 * Return: void
 */
void mul_top_two(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	(void) line_number;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		push_error(24);
		return;
	}
	tmp = *stack;
	*stack = (*stack)->next;
	(*stack)->n *= tmp->n;
	(*stack)->prev = NULL;
	free(tmp);
}

