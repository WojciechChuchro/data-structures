#pragma once

#include <stdbool.h>

#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H

typedef struct Node {
    int val;
    struct Node *next;
} Node;


Node* createEmptyNode();
Node* createNode(int val);


#endif //SINGLELINKEDLIST_H