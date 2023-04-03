#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free a list.
 * @head: Address of the first node a list.
 * Return:i
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;


	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}

