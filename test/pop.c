#include "monty.h"
/**
 * f_pop - prints the top
 * @stack: stack head
 * @line_number: line_number
 * Return: no return
*/
void f_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;

	if (*stack == NULL)
	{

		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);

	}
	temp = *stack;
	*stack = temp->next;
	free(temp);
}
