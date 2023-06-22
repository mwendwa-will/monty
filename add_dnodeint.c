#include "monty.h"
/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @stack: a pointer to the linked list
 * @line_number: the line number
 *
 * Return: void
 */
void
add_dnodeint(stack_t **stack,
	unsigned int line_number __attribute__((unused)))
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		push_error(11);
	if (_isdigit(data.args[1]) > 0)
		push_error(16);
	new_node->n = atoi(data.args[1]);
	if (*stack == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	else
	{
		(*stack)->prev = new_node;
		new_node->next = *stack;
		new_node->prev = NULL;
	}
	*stack = new_node;
}

