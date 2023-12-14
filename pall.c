#include "monty.h"
/**
 * f_pall - prints all elements of the stack
 * @stack: pointer to the stack
 * @line_number: line number
 */
void f_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	(void)line_number;

	current = *stack;
	if (current == NULL)
		return;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
