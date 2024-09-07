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

int doListLength(struct node *n) {
    if (n == NULL) return 0;
    return 1 + doListLength(n->next);
}

// returns the length of a linked list
int listLength(struct list *l) {
    return doListLength(l->head);
}

struct node *doListDelete(struct node *n, int val) {
    if (n == NULL) return NULL;

	// if value is at head of list, delete it and return second node since it's the new head
	if (n->data == val) {
		struct node *newHead = n->next;
		free(n);
		return newHead;
	}

	n->next = doListDelete(n->next, val);
	return n;
}

// deletes the first node with value 'val' from list
// if 'val' is not in the list, do nothing
// .. note that we don't need to return the new head of the linked list, since
// .. if that changes, we just update the l->head pointer
void listDelete(struct list *l, int val) {
    l->head = doListDelete(l->head, val);
}
