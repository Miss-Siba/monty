#include "monty.h"
/**
 * stack_size - calculates the size of the stack
 * @stack: pointer to the stack
 *
 * Return: size of the stack
 */
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
/**
 * f_swap - swaps the top two elements of the stack
 * @stack: pointer to the stack
 * @line_number: current line number
 *
 * Return: void
 */
void f_swap(stack_t **stack, unsigned int line_number)
{
	int temp;
	size_t size = stack_size(*stack);
	stack_t *t;

	t = *stack;
	while (t)
	{
		t = t->next;
		size++;
	}

	if (size < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	temp  = t->n;
	t->n = t->next->n;
	t->next->n = temp;

}
