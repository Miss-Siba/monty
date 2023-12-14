#include "monty.h"

/**
 * f_pstr - print string from stack of ints up to null byte,
 * first non-ascii character, or end of stack
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void f_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int ch;

	(void)line_number;

	temp = *stack;
	while (temp)
	{
		ch = temp->n;
		if (ch > 127 || ch <= 0)
			break;

		putchar(ch);
		temp = temp->next;

	}
	putchar('\n');
}
