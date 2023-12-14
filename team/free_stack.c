/**
 * free_stack - frees a stack
 * @stack: pointer to the stack
 */
void free_stack(stack_t **stack)
{
    stack_t *temp;

    if (stack == NULL || *stack == NULL)
        return;

    while (*stack != NULL)
    {
        temp = *stack;
        *stack = (*stack)->next;
        free(temp);
    }
}
