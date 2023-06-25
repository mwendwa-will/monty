#include "monty.h"
/**
 * print_reverse - prints from bottom to top
 * @stack: the pointer to the head
 * @line_number: the line number
 *
 * Return: void
 */
void pop_top(stack_t **stack,
	unsigned int line_number __attribute__((unused)))
{
	stack_t *tmp;

	if (*stack == NULL)
		push_error(18);
	if ((*stack)->next == NULL)
	{
		free(*stack);
		*stack = NULL;
		return;
	}
	tmp = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(tmp);
}

