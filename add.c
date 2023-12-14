#include "monty.h"

/**
 * f_add - adds the top two elements of the stack and pushes the result.
 * @stack: pointer to a stack struct
 * @line_number: line number
 */

void f_add(stack_t **stack, unsigned int line_number)
{
	stack_t *top;
	int sum;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	sum = (*stack)->n + (*stack)->next->n;
	(*stack)->next->n = sum;

	top = (*stack)->next;
	(*stack)->next = top->next;

	free(top);
}
