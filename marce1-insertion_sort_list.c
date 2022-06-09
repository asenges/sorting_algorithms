#include "sort.h"
/**
 * insertion_sort_list - insertion sorting function
 * Return: void
 * @list: listint_t double ptr
 * Description: Insertion sorting function
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node = NULL, *aux_node = NULL, *tmp_node = NULL;

	if (list == NULL || *list == NULL)
		return;
	node = (*list)->next;
	while (node)
	{
		/*Ubico el nodo next_node en el segundo*/
		aux_node = node->next;
		/*como voy a comparar con el anterior tengo que incluir la
		 * la condicion de prev sea distinto de nulo
		 * ademas de que el anterior sea mayoy al actual*/
		while (node->prev != NULL && node->prev->n > node->n)
		{
			/*Asigno el nodo previo para la comparacion*/
			tmp_node = node->prev;
			/*Asigno el nodo siguiente*/
			tmp_node->next = node->next;
			if (node->next != NULL)
				node->next->prev = node->prev;
			/*swap de nodos*/
			node->next = tmp_node;
			node->prev = tmp_node->prev;
			tmp_node->prev = node;
			/* para el anterior ver caso especial primer nodo*/
			if (node->prev == NULL)
				*list = node;
			else
				node->prev->next = node;
			print_list(*list);
		}
		node = aux_node;
	}
}
