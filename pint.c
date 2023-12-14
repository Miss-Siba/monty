#include "monty.h"
/**
 * f_pint - prints the top
 * @stack: stack head
 * @line_number: line_number
 * Return: no return
*/
void f_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
