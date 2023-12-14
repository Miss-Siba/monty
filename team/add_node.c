#include "monty.h"


int add_node(stack_t **stack, int element)
{

	stack_t *new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		return 0;
	}


	new_node->element = element;
	new_node->next = *stack;

	*stack = new_node;

	return 1;
}

