#ifndef SORT_H
#define SORT_H

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* lib */
#include <stdio.h>
#include <stdlib.h>

/* func ----------------------------------------------------------------*/
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/* 0x00 */
void bubble_sort(int *array, size_t size);

/* 0x01 */
void swap_nodes(listint_t **head, listint_t **node1, listint_t *node2);
void insertion_sort_list(listint_t **list);

/* 0x02 */
void selection_sort(int *array, size_t size);

#endif
