#include "monty.h"

/**
 * free_stack - frees the stack on exit
 * @status: exit status
 * @arg: double pointer to the stack
 *
 * Return: void
 */


void free_stack(stack_t **stack)
{	int status;

	stack_t **arg;
	stack_t *next;

	(void)status;
	status = 0;
	arg = stack;


	if (*arg)
	{
		(*arg)->prev->next = NULL;
		(*arg)->prev = NULL;
	}
	while (*arg != NULL)
	{
		next = (*arg)->next;
		free(*arg);
		*arg = next;
	}
	var.stack_len = 0;
}

