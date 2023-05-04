#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

/**
 * sum_listint - compute the sum of all data in a list
 * @head: pointer to the head of the list
 *
 * Return: sum of all data in the list
 */
int sum_listint(listint_t *head)
{
    int sum = 0;
    listint_t *current_node = head;
    while (current_node != NULL) {
        sum += current_node->n;
        current_node = current_node->next;
    }
    return sum;
}

