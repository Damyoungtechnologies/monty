#include "monty.h"

/**
 * f_div - Divides the second top element of the stack by the top element.
 * @head: Pointer to the stack head
 * @counter: Line number
 * Return: No return
 *
 * Description:
 * This function divides the second top element of the stack.
 * If the stack contains fewer than two elements, it prints
 * the error message L<line_number>: can't div, stack too short,
 * followed by a new line, and exits with the status EXIT_FAILURE.
 * If the top element is zero, it prints the error message
 * L<line_number>: division by zero, followed by a new line,
 * and exits with the status EXIT_FAILURE.
 */
void f_div(stack_t **head, unsigned int counter)
{
	stack_t *h = *head;

	if (h == NULL || h->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h->next->n /= h->n;
	*head = h->next;
	free(h);
}
