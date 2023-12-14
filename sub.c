#include "monty.h"

/**
 * f_sub - subtract top element of stack from next element and push result
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void f_sub(stack_t **stack, unsigned int line_number)
{
	stack_t *h;
	int t;
	int length = 0;

	h = *stack;
	for (length = 0; h != NULL; length++)
		h = h->next;

	if (length < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	h = *stack;
	t = h->next->n - h->n;
	h->next->n = t;
	*stack = h->next;
	free(h);
}
