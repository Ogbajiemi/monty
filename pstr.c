#include "monty.h"
/**
 * print_str - prints the string from the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void print_str(stack_t **head, unsigned int counter)
{
	stack_t *i;
	(void)counter;

	i = *head;
	while (i)
	{
		if (i->n > 127 || i->n <= 0)
		{
			break;
		}
		printf("%c", i->n);
		i = i->next;
	}
	printf("\n");
}
