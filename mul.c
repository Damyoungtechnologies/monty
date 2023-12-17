#include "monty.h"

/**
 * f_mul - Multiplies the second top element of the stack with the top element.
 * @head: Pointer to the stack or queue head
 * @counter: Line number
 * Return: No return
 *
 * Description:
 * The function multiplies the second top element of the stack
 * with the top element.
 * If the stack contains fewer than two elements, it prints
 * the error message L<line_number>: can't mul, stack too short,
 * followed by a new line, and exits with the status EXIT_FAILURE.
 * The result is stored in the second top element of the stack,
 * and the top element is removed, so that at the end:
 * - The top element of the stack contains the result
 * - The stack is one element shorter
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

	result = (*head)->next->n * (*head)->n;
	(*head)->next->n = result;
	current = *head;
	*head = (*head)->next;
	free(current);
}
