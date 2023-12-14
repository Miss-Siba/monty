#include "monty.h"

stack_t* createStack(void)
{
	stack_t *stack = malloc(sizeof(stack_t));
	if (stack == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	stack->n = 0;
	stack->prev = NULL;
	stack->next = NULL;
	return stack;
}
