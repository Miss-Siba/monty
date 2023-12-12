#include "monty.h"
/**
 * f_push - pushes an element to the stack
 * @stack: pointer to the stack
 * @line_number: line number
 */
void f_push(stack_t **stack, unsigned int line_number)
{
	char *str = NULL;
	stack_t *new;
	int n, j = 0, flag = 0;
	FILE *file;
	size_t len = 0;
	ssize_t read = getline(&str, &len, file);

	if (read != -1)
	{
		if (str[0] == '-')
			j++;
		for (; str[j] != '\0'; j++)
		{
			if (str[j] > 57 || str[j] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			free(file)
			free_stack(*new);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free(file)
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(str);
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *stack;
	if (*stack != NULL)
	{
		(*stack)->prev = new;
	}
	*stack = new;
}
