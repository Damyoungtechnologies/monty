#include "monty.h"

/**
 * f_stack - Switches the stack mode to LIFO (stack) from FIFO mode (Queue).
 * @head: Definitely pointing to the stack head
 * @counter: Line number (unused) - not needed
 */
void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
