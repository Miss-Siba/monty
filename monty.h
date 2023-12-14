#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define STACK 0
#define QUEUE 1
#define MAX_LINE_LENGTH 256
#define MAX_LINE 1024

/**
 * struct var_s - struct to contain the main variables of the Monty interpreter
 * @queue: flag to determine if in stack vs queue mode
 * @stack_len: length of the stack
 */
typedef struct var_s
{
	int queue;
	int stack_len;
} var_t;
extern var_t var;
/**
 * struct arg_s - Structure to hold arguments
 * @stream: File stream
 * @line: Line read from the file
 * @line_number: Line number in the file
 * @stack_len: Length of the stack
 * @stack: Stack mode indicator (0 for stack, 1 for queue)
 *
 * Description: Structure to hold various arguments used in Monty interpreter.
 */
typedef struct arg_s
{
	FILE *stream;
	char *line;
	unsigned int line_number;
	int stack_len;
	int stack;
} arg_t;

extern struct arg_t *arg;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO ALX project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void get_op(char *op, stack_t **stack, unsigned int line_number);
void f_push(stack_t **stack, unsigned int line_number);
void f_push2(stack_t **stack, int n);
void f_pall(stack_t **stack, unsigned int line_number);
int execute(char *content, stack_t **stack, unsigned int line_num, FILE *file);
ssize_t _getline(char **buffer, size_t *size, FILE *stream);
void f_pint(stack_t **stack, unsigned int line_number);
void f_pop(stack_t **stack, unsigned int line_number);
void f_swap(stack_t **stack, unsigned int line_number);
void f_add(stack_t **head, unsigned int line_number);
void f_nop(stack_t **stack, unsigned int line_number);
void f_sub(stack_t **stack, unsigned int line_number);
void f_mul(stack_t **stack, unsigned int line_number);
void f_div(stack_t **stack, unsigned int line_number);
void f_mod(stack_t **stack, unsigned int line_number);
void f_rotl(stack_t **stack, unsigned int line_number);
void f_rotr(stack_t **stack, unsigned int line_number);
void f_queue(stack_t **stack, unsigned int line_number);
void f_stack(stack_t **stack, unsigned int line_number);
void f_pchar(stack_t **stack, unsigned int line_number);
void f_pstr(stack_t **stack, unsigned int line_number);
void free_stack(stack_t **stack);
void free_lineptr(void *arg);
void f_fs_close(void *arg);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
int is_numeric(const char *str);

#endif /* _MONTY_H_ */
