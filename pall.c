#include "monty.h"

/**
 * pall - this prints all the data of a stack
 * @head: double pointer to the head of the stack
 * @line: curent line number
 *
 * Return: void
 */
void pall(stack_t **head, unsigned int line)
{
	stack_t *j;

	(void)line;
	j = *head;
	while (j)
	{
		printf("%d\n", j->n);
		j = j->next;
	}
}
