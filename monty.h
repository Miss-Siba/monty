#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <assert.h>

#define MAX 5
#define ERR "\x1B[31m"
#define SUCCESS "\x1B[32m"
#define RESET "\033[0m"

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

void push(stack *s, int data);
int pop(stack *s);
void display(stack *s);
void nop(void);
void add(struct stack *s);

#endif /* _MONTY_H_ */
