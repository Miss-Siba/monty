#include "monty.h"

/*
 * add - adds the top two elements of the stack and pushes the result to stack
 * @s: pointer to a stack struct
 */

void add(struct stack *s)
{
	int a, b, c;

	if (s->current_size < 2)
	{
		printf("Error: can't add, stack too short\n");
		exit(EXIT_FAILURE);
	}

	a = pop(s);
	b = pop(s);
	c = a + b;

	push(s, c);
}
