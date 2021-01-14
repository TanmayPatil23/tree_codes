#ifndef __BST__
#define _BST__
typedef struct node {
    int key;
    struct node *left, *right;
} node;

typedef node* bst;

void init(bst *t);
void insert_bst(bst *t, int data);
void inorder(bst t);
void preorder(bst t);
void postorder(bst t);
#endif