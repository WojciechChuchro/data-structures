#include "../includes/LinkedList.h"

#include <stdio.h>
#include <stdlib.h>

LinkedList* createEmptyLinkedList() {
  LinkedList* newLinkedList = malloc(sizeof(LinkedList));

  if (newLinkedList==NULL) {
    printf("Error while creating new linked list!");
    return NULL;
  }

  newLinkedList->head = NULL;
  newLinkedList->tail = NULL;

  return newLinkedList;
  }

LinkedList* createLinkedList(Node* head, Node* tail) {
  LinkedList* newLinkedList = malloc(sizeof(LinkedList));

  if (newLinkedList==NULL) {
    printf("Error while creating new linked list!");
    return NULL;
  }

  newLinkedList->head = head;
  newLinkedList->tail = tail;

  return newLinkedList;
  }

bool isHeadNull(Node** head, char msg[]) {
    if (*head == NULL) {
        printf("Head cannot be null in! %s", msg);
        return true;
    }
    return false;
}


bool addFromHead(LinkedList** ll, const int val) {
    Node* newNode = createNode(val);

    if (newNode == NULL) {
        printf("Error while trying add new note to head!");
        return false;
    }

    if ((*ll)->head == NULL) {
        (*ll)->head = newNode;

        return true;
    }

    Node* lastNode = (*ll)->head;

    while (lastNode->next!=NULL) {
        lastNode= lastNode->next;
    }

    lastNode->next = newNode;

    return true;
}

void printFromHead(const LinkedList* ll) {
    if (ll == NULL) {
        printf("Head cannot be null in printFromHead!");
    } else {
        Node* traverse = ll->head;

        printf("HEAD ");
        while (traverse != NULL) {
            printf(" %d -> ", traverse->val);
            traverse =traverse->next;
        }

        printf(" TAIL\n");
        free(traverse);
    }
}
//bool addFirst(Node** head, const int val) {
//    Node* newHead = createNode(val);
//
//    if (newHead == NULL) {
//        printf("Failed creating new head!");
//        return false;
//    }
//
//    newHead->next = *head;
//    *head = newHead;
//
//    return true;
//}
//
bool addLast(LinkedList** ll, int val) {
    Node* newNode = createNode(val);

    if (newNode == NULL) {
        printf("Failed creating new head!");
        return false;
    }

    if ((*ll)->head == NULL) {
        (*ll)->head = newNode;
        return true;
    }

    Node* curr = (*ll)->head;

    while (curr->next != NULL) {
        curr = curr->next;
    }


    curr->next = newNode;
    (*ll)->tail = newNode;


    return true;
}
//
//Node* getFirst(Node* head) {
//    printf("%p -> %d  ", head, head->val);
//
//    return head;
//}
//
//int size(Node* head) {
//    Node* current = head;
//    int size = 0;
//
//    while (current != NULL) {
//        size++;
//        current = current->next;
//    }
//
//    free(current);
//
//    return size;
//}
//
//bool removeFirst(Node** head) {
//
//    if (isHeadNull(head, "removeFirst")) {
//        return false;
//    }
//
//    Node* temp = *head;
//
//    *head = (*head)->next;
//    free(temp);
//
//    return true;
//}
//
//bool removeLastFromHead(Node** head) {
//    if (isHeadNull(head, "removeLastFromHead")) {
//        return false;
//    }
//
//    Node* last = *head;
//    Node* temp = NULL;
//
//
//    while (last->next->next!=NULL) {
//         last = last->next;
//    }
//
//    temp = last->next;
//    last->next = NULL;
//
//
//    free(temp);
//    return true;
//}
//
//Node* getLastFromHead(Node** head) {
//    if (isHeadNull(head, "getLastFromHead")) {
//        return NULL;
//    }
//
//
//    Node* lastNode = *head;
//
//    while (lastNode->next != NULL) {
//        lastNode = lastNode->next;
//    }
//
//    printf("Last node %p value %d\n", lastNode, lastNode->val);
//
//    return lastNode;
//}
