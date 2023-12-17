#include "monty.h"

/**
 * f_pchar - Characters at the top for print
 * @head: Pointer to the stack head
 * @counter: Line number
 * Return: No return
 *
 * Description:
 * The opcode pchar prints the char at the top
 * The integer stored at the top of the stack is treated as the ASCII value
 * of the character to be printed.
 * If the value is not in the ASCII table (man ascii), it prints
 * the error message L<line_number>: can't pchar, value out of range,
 * followed by a new line, and exits with the status EXIT_FAILURE.
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
