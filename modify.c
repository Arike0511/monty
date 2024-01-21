#include "monty.h"

/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_mod(stacked_s **head, unsigned int count)
{
	stacked_s *g;
	int length = 0, gua;

	g = *head;
	while (g)
	{
		g = g->onto;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
		fclose(bus.filed);
		free(bus.entails);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	g = *head;
	if (g->a == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.filed);
		free(bus.entails);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	gua = g->onto->a % g->a;
	g->onto->a = gua;
	*head = g->onto;
	free(g);

}
