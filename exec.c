#include "monty.h"

/**
* exec - executes the opcode
* @stack: head linked list - stack
* @count: line-counter
* @filed: poiner to monty file
* @entails: line content
* Return: no return
*/
int exec(char *entails, stacked_s **stack, unsigned int count, FILE *filed)
{
	info_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int o = 0;
	char *opnn;

	opnn = strtok(entails, " \n\t");
	if (opnn && opnn[0] == '#')
		return (0);
	bus.arguments = strtok(NULL, " \n\t");
	while (opst[o].opcode && opnn)
	{
		if (strcmp(opnn, opst[o].opcode) == 0)
		{	opst[o].f(stack, count);
			return (0);
		}
		o++;
	}
	if (opnn && opst[o].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", count, opnn);
		fclose(filed);
		free(entails);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
