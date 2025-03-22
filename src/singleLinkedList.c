#include <stdio.h>
#include <stdlib.h>

#include "../includes/SingleLinkedList.h"

bool isHeadNull(SingleLinkedList** head, char msg[]) {
    if (*head == NULL) {
        printf("Head cannot be null in! %s", msg);
        return true;
    }
    return false;
}

SingleLinkedList* createSingleLinkedList(const int val) {
    SingleLinkedList* newNode = malloc(sizeof(SingleLinkedList));
    
    if (newNode == NULL) {
        printf("Failed creating new node!");

        return false;
    }

    newNode->val = val;

    return newNode;
}

bool addFromHead(SingleLinkedList** head, const int val) {
    SingleLinkedList* newNode = createSingleLinkedList(val);

    SingleLinkedList* lastNode = *head;
    while (lastNode->next!=NULL) {
        lastNode= lastNode->next;
    }

    lastNode->next = newNode;

    return true;
}

void printFromHead(SingleLinkedList** head) {
    if (head == NULL) {
        printf("Head cannot be null in printFromHead!");
    } else {
        SingleLinkedList* traverse = *head;

        printf("HEAD ");
        while (traverse != NULL) {
            printf(" %d -> ", traverse->val);
            traverse =traverse->next;
        }

        printf(" TAIL\n");
        free(traverse);
    }
}
bool addFirst(SingleLinkedList** head, const int val) {
    SingleLinkedList* newHead = createSingleLinkedList(val);

    if (newHead == NULL) {
        printf("Failed creating new head!");
        return false;
    }

    newHead->next = *head;
    *head = newHead;

    return true;
}

SingleLinkedList* getFirst(SingleLinkedList* head) {
    printf("%p -> %d  ", head, head->val);

    return head;
}

int size(SingleLinkedList* head) {
    SingleLinkedList* current = head;
    int size = 0;

    while (current != NULL) {
        size++;
        current = current->next;
    }

    free(current);

    return size;
}

bool removeFirst(SingleLinkedList** head) {

    if (isHeadNull(head, "removeFirst")) {
        return false;
    }

    SingleLinkedList* temp = *head;

    *head = (*head)->next;
    free(temp);

    return true;
}

bool removeLastFromHead(SingleLinkedList** head) {
    if (isHeadNull(head, "removeLastFromHead")) {
        return false;
    }

    SingleLinkedList* last = *head;
    SingleLinkedList* temp = NULL;


    while (last->next->next!=NULL) {
         last = last->next;
    }

    temp = last->next;
    last->next = NULL;


    free(temp);
    return true;
}

SingleLinkedList* getLastFromHead(SingleLinkedList** head) {
    if (isHeadNull(head, "getLastFromHead")) {
        return NULL;
    }


    SingleLinkedList* lastNode = *head;

    while (lastNode->next != NULL) {
        lastNode = lastNode->next;
    }

    printf("Last node %p value %d\n", lastNode, lastNode->val);

    return lastNode;
}
