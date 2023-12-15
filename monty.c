#include "monty.h"
#include <stdio.h>
/**
 * add_node - Adds a new node to the stack.
 * @stack: Double pointer to the head of the stack.
 * @n: Integer value to be stored in the new node.
 *
 * Return: Address of the new node.
 */
stack_t *add_node(stack_t **stack, int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new_node;
	return (new_node);
}

/**
 * push - Implements the push opcode.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number in the file.
 */
void push(stack_t **stack, unsigned int line_number)
{
    /* Implementation of push */
}

/**
 * pall - Implements the pall opcode.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number in the file.
 */
void pall(stack_t **stack, unsigned int line_number)
{
    /* Implementation of pall */
}
