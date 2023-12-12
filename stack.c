#include "monty.h"

Stack* createStack(void)
{
	Stack* stack = (Stack*)malloc(sizeof(Stack));
	if (stack == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	stck-> = NULL;
	return stack;
}
