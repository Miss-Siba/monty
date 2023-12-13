#include "monty.h"
/**
 * main - Entry point
 *
 * Description: Test the stack functions
 * Return: 0 on success, exit with error code otherwise
 */
int main(void)
{
	stack_t *stack = NULL;

	push(&stack, 1);
	push(&stack, 2);
	push(&stack, 3);

	pall(&stack);

	pint(&stack);

	pop(&stack);
	pop(&stack);

	pall(&stack);

	return (0);
}

