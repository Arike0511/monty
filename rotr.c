#include "monty.h"

/**
  *f_rotr - rotetes the stack to the bottom
  *@head: stack head
  *@count: line-number
  *Return: no return
 */
void f_rotr(stacked_s **head, __attribute__((unused)) unsigned int count)
{
	stacked_s *opy;

	opy = *head;
	if (*head == NULL || (*head)->onto == NULL)
	{
		return;
	}
	while (opy->onto)
	{
		opy = opy->onto;
	}
	opy->onto = *head;
	opy->previous->onto = NULL;
	opy->previous = NULL;
	(*head)->previous = opy;
	(*head) = opy;
}
