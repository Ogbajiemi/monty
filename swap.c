#include "monty.h"
/**
 * swap - add to top two elements.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void swap(stack_t **head, unsigned int counter)
{
	stack_t *i;
	int l = 0;
	int aux;

	i = *head;
	while (i)
	{
		i = i->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	aux = i->n;
	i->n = i->next->n;
	i->next->n = aux;
}
