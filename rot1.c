#include "monty.h"

/**
  *f-rotl- rotates the stack to the top
  *@head: stack head
  *@counter: line-number
  *Return: no return
 */
void f_rotl(stacked_s **head,  __attribute__((unused)) unsigned int count)
{
	stacked_s *pmt = *head, *val;

	if (*head == NULL || (*head)->onto == NULL)
	{
		return;
	}
	val = (*head)->onto;
	val->previous = NULL;
	while (pmt->onto != NULL)
	{
		pmt = pmt->onto;
	}
	pmt->onto = *head;
	(*head)->onto = NULL;
	(*head)->previous = pmt;
	(*head) = val;
}
