#include <stdio.h>
#include <stdlib.h>

#include "../includes/Node.h"

Node* createNode(const int val) {
    Node* newNode = malloc(sizeof(Node));

    if (newNode == NULL) {
        printf("Error while creating new node!");
        return NULL;
    }

    newNode->val = val;

    return newNode;
}

Node* createEmptyNode() {
     Node* newNode = malloc(sizeof(Node));

    if (newNode == NULL) {
        printf("Error while creating empty new node!");
        return NULL;
    }

    newNode->val = -1;

    return newNode;
}
