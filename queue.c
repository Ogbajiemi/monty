#include "monty.h"
/**
 * _queue - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void _queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * _addnod - add a node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void _addnod(stack_t **head, int n)
{
	stack_t *addnod;
	stack_t *aux;

	aux = *head;
	addnod = malloc(sizeof(stack_t));
	if (addnod == NULL)
	{
		printf("Error\n");
	}
	addnod->n = n;
	addnod->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = addnod;
		addnod->prev = NULL;
	}
	else
	{
		aux->next = addnod;
		addnod->prev = aux;
	}
}
