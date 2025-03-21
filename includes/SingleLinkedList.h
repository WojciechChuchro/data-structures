#include <stdbool.h>

#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H

typedef struct SingleLinkedList {
    int val;
    struct SingleLinkedList *next;
} SingleLinkedList;
SingleLinkedList* createSingleLinkedList(int val);

bool add(SingleLinkedList** head, int val);
void printFromHead(SingleLinkedList** head);


#endif //SINGLELINKEDLIST_H