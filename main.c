#include <stdlib.h>
#include <stdio.h>
#include "includes/LinkedList.h"
#include "includes/Node.h"
#include "includes/BST.h"

LinkedList* init() {

    Node* head = createNode(10);
    Node* tail = createNode(10);


    LinkedList* ll = createLinkedList(head, tail);

    addFromHead(&ll, 15);
    // addFromHead(&head, 1);
    // addFromHead(&head, 2);
    // addFromHead(&head, 3);
    //
    // printf("Init list\n");
    printFromHead(ll);

    return ll;
}

void linkedList() {
    LinkedList* ll = init();

    LinkedList* ell = createEmptyLinkedList();

    printf("empty list\n");
    addLast(&ell, 2);
    printFromHead(ell);
    addLast(&ell, 69);
    addLast(&ell, 32);
    printFromHead(ell);
    addLast(&ell, 92);
    printFromHead(ell);
    // addFromHead(&ell, 22);
    // printFromHead(ell);
    // addFromHead(&ell, 9);
    //
    // printFromHead(ell);

    free(ell);

    // addFirst(&head, 69);
    // getFirst(head);

    // removeFirst(&head);
    // lastNode = getLastFromHead(&head);
    // removeLastFromHead(&head);
    // printFromHead(&head);
    // const int s = size(head);
    // printf("size %d", s);

    free(ll->head);
    free(ll->tail);
    free(ll);
}

void bst() {
    BST* bst = createEmptyBST();

    free(bst);
}

int main(void) {
    // linkedList();
    bst();
    return 0;
}