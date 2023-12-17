#include "monty.h"

/**
 * f_mul - The function multiplies the last two elements in a given stack.
 * @head: Pointer to the Stack or queue head
 * @counter: Pointing only to the line number
 */
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;
	int stack_size = 0, result;

	while (current)
	{
		current = current->next;
		stack_size++;
	}

	if (stack_size < 2)
	{
		fprintf(stderr, "L%d: can't multiply, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	current = *head;
	result = current->next->n * current->n;
	current->next->n = result;
	*head = current->next;
	free(current);
}
