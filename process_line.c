#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @line_num: line_counter
* @file: poiner to monty file
* @content: content
* Return: 1 if fail and 0 on success.
*/
int execute(char *content, stack_t **stack, unsigned int line_num, FILE *file)
{
	instruction_t op[] = {
		{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
		{"swap", f_swap}, {"add", f_add}, {"pop", f_pop}, {"nop", f_nop},
		{"sub", f_sub}, {"div", f_div}, {"mod", f_mod}, {"mul", f_mul},
		{"pchar", f_pchar}, {"pstr", f_pstr}, {"rotl", f_rotl}, {"rotr", f_rotr},
		{NULL, NULL}
	};
	unsigned int found = 0;
	char *o;

	o = strtok(content, " \n\t");
	if (o && o[0] == '#')
	{
		return (0);
	}

	while (op[found].opcode && o)
	{
		if (strcmp(o, op[found].opcode) == 0)
		{
			op[found].f(stack, line_num);
			return (0);
		}
		found++;
	}
	if (o && op[found].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_num, o);
		fclose(file), free(content), free_stack(stack);
		exit(EXIT_FAILURE);
	}

	return (1);
}
