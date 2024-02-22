#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

extern struct Node *head;

void insert_node_front(int);
void insert_node_tail(int);
void print_list(void);
void delete_from_head(void);
void delete_nth_node(void);
#endif //LINKED_LIST_H
