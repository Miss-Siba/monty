#include "monty.h"
/**
 * stack_size - Computes the size of a stack_t linked list.
 * @stack: A pointer to the head of the stack.
 *
 * Return: The size of the stack.
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
 * f_swap - Swaps the top two elements of a stack.
 * @stack: A double pointer to the head of the stack.
 * @line_number: The line number of the opcode being executed.
 */
void f_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *h;
	int temp;
	int length = 0;

	while (h)
	{
		h = h->next;
		length++;
	}

	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	h = *stack;
	temp = h->n;
	h->n = h->next->n;
	h->next->n = temp;

}
