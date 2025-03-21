#include <stdio.h>
#include <stdlib.h>
#include "includes/SingleLinkedList.h"

int main(void) {
    SingleLinkedList* head = createSingleLinkedList(10);

    printFromHead(&head);
    free(head);
    return 0;
}