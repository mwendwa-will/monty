#include "monty.h"

/**
 * swap_top - swaps the two tops value
 * @stack: the pointer to the linked list
 * @line_number: the line number
 *
 * Return: void
 */
void swap_top(stack_t **stack,
	unsigned int line_number __attribute__((unused)))
{
	stack_t *second;
	stack_t *first;

	if (*stack == NULL || (*stack)->next == NULL)
		push_error(19);
	first = *stack;
	second = (*stack)->next;
	first->next = second->next;
	first->prev = second;
	if (second->next)
		second->next->prev = first;
	second->next = first;
	second->prev = NULL;
	(*stack) = second;
}
