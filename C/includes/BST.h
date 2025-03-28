#include "./Node.h"

#ifndef BST_H
#define BST_H
typedef struct BSTNode {
 struct BSTNode* left;
 struct BSTNode* right;
 int val;
} BSTNode;

typedef struct Root {

} Root;

typedef struct BST {
 BSTNode* root;
} BST;

BST* createEmptyBST();
bool insert(BST** bst, int val);
bool delete(BST** bst, int val);

Node* find(BST** bst, int val);

// Traversal Methods
//
//     Inorder Traversal (inorder) – Visits nodes in sorted order (left → root → right).
//
//     Preorder Traversal (preorder) – Visits nodes in (root → left → right) order.
//
//     Postorder Traversal (postorder) – Visits nodes in (left → right → root) order.
//
//     Level Order Traversal (level_order) – Visits nodes level by level (Breadth-First Search).
//
// Additional Utility Methods
//
//     Find Minimum (find_min) – Returns the node with the smallest value.
//
//     Find Maximum (find_max) – Returns the node with the largest value.
//
//     Find Height (height) – Returns the height of the tree.
//
//     Check if Empty (is_empty) – Checks if the tree is empty.
//
//     Find Successor (successor) – Finds the next higher value node in the BST.
//
//     Find Predecessor (predecessor) – Finds the next lower value node in the BST.

#endif //BST_H
