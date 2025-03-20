#include <stdio.h>
#include <stdlib.h>
#include "includes/SingleLinkedList.h"

int main(void) {
    SingleLinkedList* head = createSingleLinkedList(10);

    printf("%d\n%p", head->val, head);
    free(head);
    return 0;
}