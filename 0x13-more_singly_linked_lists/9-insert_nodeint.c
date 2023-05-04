#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

/**
 * insert_nodeint_at_index - insert a new node with data at a given position
 * @head: pointer to pointer to the head of the list
 * @idx: index of the list where the new node should be added (starting from 0)
 * @n: data value of the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node = malloc(sizeof(listint_t));
    if (new_node == NULL) {
        return NULL; // allocation failed
    }
    new_node->n = n;
    if (idx == 0) {
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }
    listint_t *current_node = *head;
    for (unsigned int i = 0; i < idx - 1; i++) {
        if (current_node == NULL) {
            free(new_node);
            return NULL; // index out of bounds
        }
        current_node = current_node->next;
    }
    if (current_node == NULL) {
        free(new_node);
        return NULL; // index out of bounds
    }
    new_node->next = current_node->next;
    current_node->next = new_node;
    return new_node;
}

