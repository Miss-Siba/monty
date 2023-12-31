#include "monty.h"
#include <ctype.h>

/**
 * f_pchar - print character from top of stack
 * @stack: double pointer to top of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void f_pchar(stack_t **stack, unsigned int line_number)
{	int isascii (int ch);
	int ch;

	if (var.stack_len < 1)
	{
		fprintf(stderr,
			"L%u: can't pchar, stack empty\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	ch = (*stack)->n;
	if (!isascii(ch))
	{
		fprintf(stderr,
			"L%u: can't pchar, value out of range\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", ch);
}
