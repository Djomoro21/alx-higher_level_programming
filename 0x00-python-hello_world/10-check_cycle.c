#include "lists.h"

/**
* check_cycle - check cycles
* 
* @list: listint_t
*
* Return: 0 or 1
*/
int check_cycle(listint_t *list)
{
listint_t *slow_p = list;
listint_t *fast_p = list;

if(list == NULL || list->next == NULL)
{
return(0);
}

while (slow_p && fast_p && fast_p->next)
{
slow_p = slow_p->next;
fast_p = fast_p->next->next;
if (slow_p == fast_p)
{
return 1;
}
}
return 0;
}
