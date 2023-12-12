#include "monty.h"

/*
 * add - adds the top two elements of the stack and pushes the result to stack
 * @s: pointer to a stack struct
 */

void f_add(stack_t **stack, unsigned int line_number)
{
	stack_t *top;
	int len = 0, sum;

	top = *stack;

	while (top)
	{
		top = top->next;
		len++;
	}

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr,"L%d: can't add, stack too short\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	top = *stack;
	sum = top->n + top->next->n;
	top->next->n = sum;
	*stack = top->next;

	free(top);
}
