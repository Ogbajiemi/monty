#include "monty.h"
/**
 * addin - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void addin(stack_t **head, unsigned int counter)
{
	stack_t *ah;
	int aux;
	int l = 0;

	ah = *head;
	while (ah)
	{
		ah = ah->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ah = *head;
	aux = ah->n + ah->next->n;
	ah->next->n = aux;
	*head = ah->next;
	free(ah);
}
