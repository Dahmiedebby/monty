#include "monty.h"

/**
 * pstr - This prints the string at the top of the stack
 * @head: double pointer of the head of the stack
 * @line: the current line number
 *
 * Return: nothing
 */
void pstr(stack_t **head, unsigned int line)
{
	stack_t *temp;

	(void)line;
	temp = *head;
	while (temp && (temp->n > 0) && (temp->n <= 127))
	{
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
