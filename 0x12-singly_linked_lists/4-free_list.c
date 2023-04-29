#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list
 * 
 * Return: length of string
 */
void free_list(list_t *head) {
    list_t *current;

    while (head != NULL) {
        current = head;
        head = head->next;
        free(current->str);
        free(current);
    }
}

