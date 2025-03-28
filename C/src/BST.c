#include "../includes/BST.h"
#include <stdlib.h>

BST* createEmptyBST() {
    BST* bst = malloc(sizeof(BST));

    return bst;
}

bool insert(BST** bst, int val) {
     BSTNode* root = (*bst)->root;

    if (root == NULL) {
       return true;
    }

    insert(root, val);

    return true;
}
