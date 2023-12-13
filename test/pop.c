#include "monty.h"

void f_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;

	if (*stack == NULL)
	{

		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	*stack = (*stack)->prev;
	free(temp);

	if (*stack)
	{
		(*stack)->next = NULL;
	}
}
