#include "monty.h"
/**
 * f_pop - removes the top element of the stack
 * @stack: double pointer to the head of the stack
 * @line_number: line number of the current operation
 *
 * Return: void
 */
void f_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *h;

	if (*stack == NULL)
	{

		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	h = *stack;
	*stack = h->next;
	free(h);
}
