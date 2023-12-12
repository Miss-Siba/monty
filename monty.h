#ifndef _MONTY_H_
#define _MONTY_H_

#include <time.h>
#include <assert.h>

#define MAX 5
#define ERR "\x1B[31m"
#define SUCCESS "\x1B[32m"
#define RESET "\033[0m"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
}
stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
}
instruction_t;

typedef struct node
{
	int data;
	struct node *next;
}
node;

/* Define the stack struct */
typedef struct stack
{
	int current_size;
	node *head;
}
stack;

extern int global_result;

void f_pop(stack_t **stack, unsigned int line_number);
void f_add(stack_t **stack, unsigned int line_number);
stack_t *createStack(void);
void f_push(stack_t **stack,  unsigned int line_number);
void f_pall(stack_t **stack, unsigned int line_number);
void f_process_line(stack_t **stack, const char *line, instruction_t instructions[]);
void free_stack(stack_t **stack);
void f_pint(stack_t **stack, unsigned int line_number);
void f_swap(stack_t **stack, unsigned int line_number);
void f_nop(stack_t **stack, unsigned int line_number);
size_t stack_size(const stack_t *stack);
#endif /* _MONTY_H_ */
