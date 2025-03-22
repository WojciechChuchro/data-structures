#pragma once

#include <stdbool.h>

#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H

typedef struct SingleLinkedList {
    int val;
    struct SingleLinkedList *next;
} SingleLinkedList;
SingleLinkedList* createSingleLinkedList(int val);

bool addFromHead(SingleLinkedList** head, int val);
bool addFirst(SingleLinkedList** head, int val);
void printFromHead(SingleLinkedList** head);
SingleLinkedList* getFirst(SingleLinkedList* head);
int size(SingleLinkedList* head);
bool removeFirst(SingleLinkedList** head);
bool removeLastFromHead(SingleLinkedList** head);
SingleLinkedList* getLastFromHead(SingleLinkedList** head);


#endif //SINGLELINKEDLIST_H