#include "monty.h"

/**
 * f-queue - prints the top
 * @head: staks head
 * @count: line-number
 * Return: no return
*/
void f_queue(stacked_s **head, unsigned int count)
{
	(void)head;
	(void)count;
	bus.kiffy = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new-value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(stacked_s **head, int l)
{
	stacked_s *new_node, *lua;

	lua = *head;
	new_node = malloc(sizeof(stacked_s));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->a = l;
	new_node->onto = NULL;
	if (lua)
	{
		while (lua->onto)
			lua = lua->onto;
	}
	if (!lua)
	{
		*head = new_node;
		new_node->previous = NULL;
	}
	else
	{
		lua->onto = new_node;
		new_node->previous = lua;
	}
}
