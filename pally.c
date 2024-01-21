#include "monty.h"

/**
 * f_pall - prints the stack
 * @head: stack head
 * @count: no used
 * Return: no return
*/
void f_pall(stacked_s **head, unsigned int count)
{
	stacked_s *j;
	(void)count;

	j = *head;
	if (j == NULL)
	{
		return;
	}
	while (j)
	{
		printf("%d\n", j->a);
		j = j->onto;
	}
}
