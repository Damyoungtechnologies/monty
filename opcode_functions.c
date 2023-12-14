#include "monty.h"

/**
 * f_push - pushes an element onto the stack.
 * @stack: pointer to the stack head
 * @value: integer value to be pushed onto the stack
 * @line_number: line number
 * Return: no return
 */
void f_push(stack_t **stack, int value, unsigned int line_number)
{
	stack_t *new_node;
	
	new_node= malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}

/**
 * f_pall - prints all the values on the stack.
 * @stack: pointer to the stack head only here
 * @line_number: line number
 * Return: no return
 */
void f_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void)line_number;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
