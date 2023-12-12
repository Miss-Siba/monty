#include "monty.h"

void swap(stack_t **stack, unsigned int line_number)
{
	size_t size = stack_size(*stack);
	if (size < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n",line_number);
		exit(EXIT_FAILURE);
	}
	int temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;

}
