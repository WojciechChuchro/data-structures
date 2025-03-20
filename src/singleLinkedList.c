#include <stdio.h>
#include <stdlib.h>

#include "../includes/SingleLinkedList.h"

SingleLinkedList* createSingleLinkedList(const int data) {

    SingleLinkedList* s = malloc(sizeof(SingleLinkedList));
    s->val = data;
    printf("hello world");

    return s;
}
