#include "lists.h"

typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head) {
    const listint_t *slow_ptr, *fast_ptr;
    size_t node_count = 0;

    slow_ptr = head;
    fast_ptr = head;

    while (slow_ptr && fast_ptr && fast_ptr->next) {
        printf("%d\n", slow_ptr->n);
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;

        if (slow_ptr == fast_ptr) {
            printf("Infinite loop detected, exiting with status 98\n");
            exit(98);
        }

        node_count++;
    }

    
    if (slow_ptr)
        printf("%d\n", slow_ptr->n);

    return node_count;
}

int main(void) {
    listint_t *head = NULL, *new_node;
    size_t node_count;

    
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL) {
        perror("Memory allocation failed");
        return (EXIT_FAILURE);
    }
    new_node->n = 1;
    new_node->next = head;
    head = new_node;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL) {
        perror("Memory allocation failed");
        return (EXIT_FAILURE);
    }
    new_node->n = 2;
    new_node->next = head;
    head = new_node;

    
    new_node = head;
    while (new_node->next)
        new_node = new_node->next;
    new_node->next = head;

    
    node_count = print_listint_safe(head);
    printf("Number of nodes in the list: %zu\n", node_count);

    return (EXIT_SUCCESS);
}

