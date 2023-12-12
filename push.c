#include "monty.h"

/**
 * f_push - pushes an element to the stack
 * @stack: pointer to the stack
 * @line_number: line number
 */
void f_push(stack_t **stack, unsigned int line_number)
{
	char *str = NULL;
	stack_t *new;
	int n;

	if (str == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	n = atoi(str);

	if (n == 0 && str[0] != '0')
	{
		fprintf(stderr, "L<line_number>: usage: push integer\n");
		exit(EXIT_FAILURE);
	}

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n = n;
	new->prev = NULL;
	new->next = *stack;

	if (*stack != NULL)
	{
		(*stack)->prev = new;
	}
	*stack = new;
}
