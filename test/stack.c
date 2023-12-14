#include "monty.h"

/**
 * f_stack - sets the format of the data to a stack (LIFO)
 * @stack: double pointer to the beginning of the stack
 * @line_number: script line number
 *
 * Return: void
 */
void f_stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	args->stack = 1;
}
