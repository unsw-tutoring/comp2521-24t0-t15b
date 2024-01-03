#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct list {
    struct node *head;

    // other properties, e.g. length, tail, etc.
    // int length;
    // struct node *tail;
};

// returns the length of a linked list
int listLength(struct list *l) {
    // TODO
    return 0;
}

// deletes the first node with value 'val' from list
// if 'val' is not in the list, do nothing
// .. note that we don't need to return the new head of the linked list, since
// .. if that changes, we just update the l->head pointer
void listDelete(struct list *l, int val) {
    // TODO
}