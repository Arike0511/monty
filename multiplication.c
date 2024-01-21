#include "monty.h"

/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @count: line-number
 * Return: no return
*/
void f_mul(stacked_s **head, unsigned int count)
{
	stacked_s *j;
	int length = 0, xua;

	j = *head;
	while (j)
	{
		j = j->onto;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(bus.filed);
		free(bus.entails);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	j = *head;
	xua = j->onto->a * j->a;
	j->onto->a = xua;
	*head =j->onto;
	free(j);
}
