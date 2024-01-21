#include "monty.h"

/**
  *f-sub- sustration
  *@head: stack head
  *@counter: line-number
  *Return: no return
 */
void f_sub(stacked_s **head, unsigned int count)
{
	stacked_s *rua;
	int sus, selon;

	rua = *head;
	for (selon = 0; rua != NULL; selon++)
	{
		rua = rua->onto;
	}
	if (selon < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.filed);
		free(bus.entails);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	rua = *head;
	sus = rua->onto->a - rua->a;
	rua->onto->a = sus;
	*head = rua->onto;
	free(rua);
}
