#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}

new->n = n;
new->prev = NULL;
new->next = NULL;

if (idx == 0)
{
new->next = *h;
if (*h != NULL)
{
(*h)->prev = new;
}
*h = new;
}
else
{
dlistint_t *current = *h;
unsigned int i = 0;
while (i < idx - 1 && current != NULL)
{
current = current->next;
i++;
}
if (current != NULL)
{
new->next = current->next;
if (current->next != NULL)
{
current->next->prev = new;
}
current->next = new;
new->prev = current;
}
else
{
free(new);
return (NULL);
}
}
return (new);
}
