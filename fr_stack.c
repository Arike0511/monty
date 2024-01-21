#include "monty.h"

/**
* free-stack - frees a doubly linked list
* @head: head of the stack
*/
void free_stack(stacked_s *head)
{
	stacked_s *fua;

	fua = head;
	while (head)
	{
		fua = head->onto;
		free(head);
		head = fua;
	}
}
