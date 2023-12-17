#include "monty.h"

/**
 * f_pchar - Top character of the stack, followed by a newline.
 * @head: Pointer to the Stack head
 * @counter: target the number line
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *top = *head;

	if (!top)
	{
		fprintf(stderr, "L%d: can't print char, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	if (top->n > 127 || top->n < 0)
	{
		fprintf(stderr, "L%d: can't print char, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", top->n);
}
