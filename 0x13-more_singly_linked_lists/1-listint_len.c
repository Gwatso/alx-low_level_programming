#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - the number of elements in a linked listint_t list.
 *
 * @h: head pointer
 *
 * Return: the number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	/**Initialize count to 0 */
	size_t count = 0;
	/**Traverse the linked list and count each element */
	while (h != NULL)
	{
	h = h->next;
		count++;
	}
	/**Return the count of nodes */
	return (count);
}
