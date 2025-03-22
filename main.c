#include <stdio.h>
#include <stdlib.h>
#include "includes/SingleLinkedList.h"

void test(SingleLinkedList* head) {
    SingleLinkedList* h = createSingleLinkedList(10);

    head->val = 15;
    head->next = h;

    printf("test: %d", head->val);
}
SingleLinkedList* init() {
    SingleLinkedList* head = createSingleLinkedList(10);

    addFromHead(&head, 15);
    addFromHead(&head, 1);
    addFromHead(&head, 2);
    addFromHead(&head, 3);

    printf("Init list\n");
    printFromHead(&head);

    return head;
}

int main(void) {
    SingleLinkedList* head = init();
    SingleLinkedList* lastNode = NULL;

    // addFirst(&head, 69);
    // getFirst(head);

    // removeFirst(&head);
    // lastNode = getLastFromHead(&head);
    removeLastFromHead(&head);
    printFromHead(&head);
    // const int s = size(head);
    // printf("size %d", s);

    free(head);
    return 0;
}