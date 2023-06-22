#include "monty.h"

/**
 * get_error_1 - gets error
 * @err_code: error code
 *
 * Return: void
 */
void get_error_1(short int err_code)
{
	switch (err_code)
	{
	case 11:
		fprintf(stderr, "Error: malloc failed\n");
		free_data();
		break;
	case 12:
		fprintf(stderr, "USAGE: monty file\n");
		break;
	case 14:
		fprintf(stderr, "Error: Can't open file %s\n", data.filename);
		break;
	case 15:
		fprintf(stderr, "L%d: unknown instruction %s\n",
			data.line_number, data.args[0]);
		free_data();
		break;
	case 16:
		fprintf(stderr, "L%d: usage: push integer\n", data.line_number);
		free_data();
		break;
	case 17:
		fprintf(stderr, "L%d: can't pint, stack empty\n", data.line_number);
		free_data();
		break;
	case 18:
		fprintf(stderr, "L%d: can't pop an empty stack\n", data.line_number);
		free_data();
		break;
	case 19:
		fprintf(stderr, "L%d: can't swap, stack too short\n", data.line_number);
		free_data();
		break;
	default:
		break;
	}
}
/**
 * get_error_2 - gets error
 * @err_code: error code
 *
 * Return: void
 */
void get_error_2(short int err_code)
{
	switch (err_code)
	{
	case 20:
		fprintf(stderr, "L%d: can't add, stack too short\n", data.line_number);
		free_data();
		break;
	case 21:
		fprintf(stderr, "L%d: can't sub, stack too short\n", data.line_number);
		free_data();
		break;
	case 22:
		fprintf(stderr, "L%d: can't div, stack too short\n", data.line_number);
		free_data();
		break;
	case 23:
		fprintf(stderr, "L%d: division by zero\n", data.line_number);
		free_data();
		break;
	case 24:
		fprintf(stderr, "L%d: can't mul, stack too short\n", data.line_number);
		free_data();
		break;
	case 25:
		fprintf(stderr, "L%d: can't mod, stack too short\n", data.line_number);
		free_data();
		break;
	default:
		break;
	}
}
/**
 * push_error - pushs errors
 * @err_code: error code
 *
 * Return: void
 */
void push_error(short int err_code)
{
	if (err_code >= 10 && err_code < 20)
		get_error_1(err_code);
	else if (err_code >= 20 && err_code < 30)
		get_error_2(err_code);
	exit(EXIT_FAILURE);
}
