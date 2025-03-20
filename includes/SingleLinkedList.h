//
// Created by Wojciech Chuchro on 20/03/2025.
//

#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H

typedef struct SingleLinkedList {
    int val;
    struct SingleLinkedList *next;
} SingleLinkedList;
SingleLinkedList* createSingleLinkedList(int data);

#endif //SINGLELINKEDLIST_H
