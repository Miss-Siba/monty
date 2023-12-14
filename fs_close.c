#include "monty.h"

/**
 * f_fs_close - close file stream
 * @arg: pointer to file stream
 *
 * Return: void
 */
void f_fs_close(void *arg)
{
	FILE *fs;

	fs = (FILE *) arg;
	fclose(fs);
}
