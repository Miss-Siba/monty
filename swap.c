#include "monty.h"

size_t stack_size(const stack_t *stack)
{
	size_t size = 0;
	const stack_t *current = stack;

	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	return (size);
}
void f_swap(stack_t **stack, unsigned int line_number)
{
	int temp;
	size_t size = stack_size(*stack);
	if (size < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n",line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;

}
