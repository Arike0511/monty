#include "monty.h"

/**
 * f-swap - adds the top two elements of the stack.
 * @head: stack head
 * @count: line-number
 * Return: no return
*/
void f_swap(stacked_s **head, unsigned int count)
{
	stacked_s *m;
	int length = 0, mua;

	m = *head;
	while (m)
	{
		m = m->onto;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.filed);
		free(bus.entails);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	m = *head;
	mua = m->a;
	m->a = m->onto->a;
	m->onto->a = mua;
}
