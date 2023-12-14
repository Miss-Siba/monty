#include "monty.h"

/**
 * free_lineptr - free line pointer returned by getline
 * @arg: pointer to line
 *
 * Return: void
 */
void free_lineptr(void *arg)
{
	char **lineptr = arg;

	if (*lineptr != NULL)
		free(*lineptr);
}
