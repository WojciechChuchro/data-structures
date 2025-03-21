#include <stdio.h>
#include <stdlib.h>

#include "../includes/SingleLinkedList.h"

SingleLinkedList* createSingleLinkedList(const int val) {
    SingleLinkedList* newNode = malloc(sizeof(SingleLinkedList));
    
    newNode->val = val;

    return newNode;
}

bool add(SingleLinkedList** head, const int val) {
    SingleLinkedList* newNode = createSingleLinkedList(val);
    
    if (newNode == NULL) {
        printf("Couldn't create new node");
        free(newNode);
        return false;
    }

    while (head) {
        
    }



}

void printFromHead(SingleLinkedList** head) {
    SingleLinkedList* test = *head;

    while (test != NULL) {
        printf("data: %d", test->val);
        test =test->next;
    }

    free(test);
}