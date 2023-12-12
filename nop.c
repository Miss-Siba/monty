#include "monty.h"

/*
 * nop - takes no parameters
 * Return: Returns nothing
 */

void nop(void)
{
	asm("nop");

}

int main(void)
{
	clock_t start, end;
	double elapsed;

	start = clock();
	for (int i = 0; i < 10; i++)
	{
		nop();
	}
	end = clock();
	elapsed = (double)(end - start) / CLOCKS_PER_SEC;
	printf("Elapsed time: %f seconds\n", elapsed);
	return (0);
}
