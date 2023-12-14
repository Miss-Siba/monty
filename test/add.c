#include "monty.h"

/**
 * f_add - adds the top two elements of the stack and pushes the result.
 * @head: pointer to the head.
 * @line_number: line number
 */

void f_add(stack_t **head, unsigned int line_number)
{
	stack_t *t;
	int sum;
	int len = 0;

	while (t)
	{
		t = t->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		free_stack(head);
		exit(EXIT_FAILURE);
	}
	t = *head;
	sum = t->n + t->next->n;
	t->next->n = sum;

	*head = t->next;

	free(t);
}
