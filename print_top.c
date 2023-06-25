#include "monty.h"
/**
 * print_reverse - prints from bottom to top
 * @stack: the pointer to the head
 * @line_number: the line number
 *
 * Return: void
 */
void print_top(stack_t **stack,
	unsigned int line_number __attribute__((unused)))
{
	if (*stack == NULL)
		push_error(17);
	fprintf(stdout, "%d\n", (*stack)->n);
}

