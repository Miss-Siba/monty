#include "monty.h"
#include <ctype.h>

/**
 * f_pchar - print character from top of stack
 * @stack: double pointer to top of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void f_pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *h;
	int ch;
	int length = 0;

	h = *stack;

	if (length < 1)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	ch = h->n;
	if (ch > 127 || ch < 0)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	putchar(ch);
	putchar('\n');
}
