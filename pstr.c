#include "monty.h"

/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @count: line-number
 * Return: no return
*/
void f_pstr(stacked_s **head, unsigned int count)
{
	stacked_s *d;
	(void)count;

	d = *head;
	while (d)
	{
		if (d->a > 127 || d->a <= 0)
		{
			break;
		}
		printf("%c", d->a);
		d = d->onto;
	}
	printf("\n");
}
