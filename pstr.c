#include "monty.h"

/**
 * f_pstr - This function prints strinhs in descending order
 * @head: This should be pointing to the stack head
 * @counter: Pointer to the Line number alone
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *current;
	(void)counter;

	current = *head;
	while (current && current->n > 0 && current->n <= 127)
	{
		printf("%c", current->n);
		current = current->next;
	}
	printf("\n");
}
