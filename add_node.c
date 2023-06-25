#include "monty.h"
/**
 * _add_node - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void addnode(stack_t **head, int n)
{

	stack_t *n_nod, *aux;

	aux = *head;
	n_nod = malloc(sizeof(stack_t));
	if (n_nod == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = n_nod;
	n_nod->n = n;
	n_nod->next = *head;
	n_nod->prev = NULL;
	*head = n_nod;
}
