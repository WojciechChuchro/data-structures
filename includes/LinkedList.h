#pragma once

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

typedef struct LinkedList {
    Node* head;
    Node* tail;
} LinkedList;

LinkedList* createLinkedList(Node* head, Node* tail);
LinkedList* createEmptyLinkedList();
bool addFirst(LinkedList** ll, int val);
bool addLast(LinkedList** ll, int val);
bool addFromHead(LinkedList**, int val);
void printFromHead(const LinkedList* ll);

#endif //LINKEDLIST_H
