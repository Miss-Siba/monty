#include "monty.h"

/**
 * f_div - divide second element of stack by top element
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void f_div(stack_t **stack, unsigned int line_number)
{
	stack_t *h;
	int length = 0;
	int t;

	h = *stack;
	while (h)
	{
		h = h->next;
		length++;
	}

	if (length < 2)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	h = *stack;
	if (h->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	t = h->next->n / h->n;
	h->next->n = t;
	*stack = h->next;
	free(h);
}
