#include "monty.h"

/**
 * f_mul - multiply top two elements of stack and push result
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void f_mul(stack_t **stack, unsigned int line_number)
{
	stack_t *h;
	int length = 0;
	int t;

	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	h = *stack;
	t = h->n * h->next->n;
	h->next->n = t;
	*stack = h->next;
	free(h);

}
