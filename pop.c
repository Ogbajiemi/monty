#include "monty.h"
/**
 * pop_mi - print the top of a stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void pop_mi(stack_t **head, unsigned int counter)
{
	stack_t *i;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	*head = i->next;
	free(i);
}
