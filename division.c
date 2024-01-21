#include "monty.h"

/**
 * f-div - divides the top two elements of the stack.
 * @head: stack head
 * @count: line-number
 * Return: no return
*/
void f_div(stacked_s **head, unsigned int count)
{
	stacked_s *p;
	int length = 0, pua;

	p = *head;
	while (p)
	{
		p = p->onto;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", count);
		fclose(bus.filed);
		free(bus.entails);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	p = *head;
	if (p->a == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.filed);
		free(bus.entails);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	pua = p->onto->a / p->a;
	p->onto->a = pua;
	*head = p->onto;
	free(p);

}
