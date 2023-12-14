#include "monty.h"
/**
 * is_numeric - Checks if a string represents a numeric value.
 * @str: The string to check.
 * Return: 1 if numeric, 0 otherwise.
 */
int is_numeric(const char *str)
{
	int j = 0;

	if (!str)
		return (0);
	if (str[0] == '-')
		j++;
	for (; str[j] != '\0'; j++)
	{
		if (str[j] < '0' || str[j] > '9')
			return (0);
	}
	return (1);
}
/**
 * f_push - add node to the stack
 * @head: stack head
 * @line_number: line_number
 * Return: no return
 */
void f_push(stack_t **head, unsigned int line_number)
{
	char *string = NULL;

	if (!string || !is_numeric(string))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_stack(head);
		exit(EXIT_FAILURE);
	}
}
