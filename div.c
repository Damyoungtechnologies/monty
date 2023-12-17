#include "monty.h"

/**
 * f_div - Divides the second top elements of the by the element
 * @head: Pointer targetted to get the Stack head
 * @counter: Seeming like pointet to Line number
 * Return: NULL value
 *
 * Description:
 * This function divides the second top element of the stack.
 * If the stack contains fewer than two elements, it print
 * If the top element is zero, it prints a division by zero
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
		fprintf(stderr, "L%d: Error - division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h->next->n /= h->n;
	*head = h->next;
	free(h);
}
