#include "monty.h"
<<<<<<< HEAD:test/main.c
<<<<<<< Updated upstream
=======
#define _GNU_SOURCE
>>>>>>> 6e5ec19b544acff990023f558c17f33ed3c93e6c:main.c

/* global struct to hold flag for queue and stack length */
var_t var;

/**
 * main - Monty bytecode interpreter
 * @argc: number of arguments passed
 * @argv: array of argument strings
 *
 * Return: EXIT_SUCCESS on success or EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
=======
/**
 * main - Monty code interpreter
 * @argc: number of arguments
 * @argv: Monty file location
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char content[1024];
	FILE *file;
	size_t size;
>>>>>>> Stashed changes
	stack_t *stack = NULL;
	unsigned int line_number = 0;
	FILE *fs = NULL;
	char *lineptr = NULL, *op = NULL;
	char buffer[1024];

	var.queue = 0;
	var.stack_len = 0;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
<<<<<<< Updated upstream
	fs = fopen(argv[1], "r");
	if (fs == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}


	while (fgets(buffer, sizeof(buffer), fs) != NULL)
	{
		line_number++;
		if (buffer[strlen(buffer) - 1] == '\n')
		{
			buffer[strlen(buffer) - 1] = '\0';
		}
		lineptr = buffer;
		op = strtok(lineptr, "\n\t\r ");
		if (op != NULL && op[0] != '#')
		{
			get_op(op, &stack, line_number);
		}
	}

	fclose(fs);
	exit(EXIT_SUCCESS);
=======
	file = fopen(argv[1], "r");

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(content, sizeof(content), file) != NULL)
	{
		size = strlen(content);
		if (size > 0 && content[size - 1] == '\n')
		{
			content[size - 1] = '\0';
		}

		line_number++;
		execute(content, &stack, line_number, file);
	}
	free_stack(&stack);
	fclose(file);
	return (0);
>>>>>>> Stashed changes
}

