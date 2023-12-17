#include "monty.h"

/**
 * f_add - Adds the top two elements of the stack.
 * @head: Pointer to the head of the stack
 * @counter: Line number in the Monty file
 * Description:
 * This function adds the values of the top two elements of the stack.
 * The result replaces the second element, and the first element is removed.
 * If the stack doesn't have enough elements, it prints an error message
 * and exits the program.
 */
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h = *head;

	if (!h || !h->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h->next->n += h->n;
	*head = h->next;
	free(h);
}
