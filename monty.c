#include "monty.h"

/**
 * execute_opcode - executes Monty bytecode opcodes
 * @opcode: the opcode
 * @stack: pointer to the stack head
 * @line_number: line number
 * Return: no return
 */
void execute_opcode(char *opcode, stack_t **stack, unsigned int line_number)
{
	if (strcmp(opcode, "push") == 0)
	{
	}
	else if (strcmp(opcode, "pall") == 0)
	{
		f_pall(stack, line_number);
	}
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
}

/**
 * main - entry point for Monty interpreter
 * @argc: argument count
 * @argv: argument vector
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	stack_t *stack = NULL;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&line, &len, file) != -1)
	{
		line_number++;
	}
	fclose(file);
	free(line);
	free_stack(stack);
	return (EXIT_SUCCESS);
}
