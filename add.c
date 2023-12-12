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
int main(void)
{
	stack *s = (stack *)malloc(sizeof(stack));

	s->current_size = 0;
	s->head = NULL;

	push(s, 10);
	push(s, 20);
	push(s, 30);
	push(s, 40);
	push(s, 50);

	printf("Stack before adding:\n");
	display(s);
	add(s);

	printf("Stack after adding:\n");
	display(s);

	assert(pop(s) == 90);
	assert(pop(s) == 50);
	assert(pop(s) == 10);

	printf(SUCCESS "tests passed!\n" RESET);

	free(s);
	return (0);
}
