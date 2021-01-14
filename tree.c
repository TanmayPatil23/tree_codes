#include <stdlib.h>
#include <stdio.h>
#include "tree.h"
void init(bst *t) {
    *t = NULL;
    return;
}
void insert_bst(bst *t, int data) {
    node *new = (node*)malloc(sizeof(node));
    if(new) {
        new->key = data;
        new->left = NULL;
        new->right = NULL;
    }
    else return;
    if(*t == NULL) {
        *t = new;
        return;
    }
    node *p = *t, *q = NULL;
    while(p != NULL){
        q = p;
        if(p->key == data){
            free(new);
            return;
        }
        if(data < p->key){
            p = p->left;
        }
        else{
            p = p->right;
        }
    }
    if(data < q->key){
        q->left = new;
    }
    else{
        q->right = new;
    }
    return;
}

void inorder(bst t) {
    if(t == NULL)
        return;
    inorder(t->left);
    printf("%d ", t->key);
    inorder(t->right);
    return;
}

void preorder(bst t) {
    if (t == NULL)
        return;
    printf("%d ", t->key);
    preorder(t->left);
    preorder(t->right);
    return;
}

void postorder(bst t) {
    if (t == NULL)
        return;
    postorder(t->left);
    postorder(t->right);
    printf("%d ", t->key);
    return;
}
/*
int main() {
    bst t;
    init(&t);
    insert_bst(&t, 10);
    insert_bst(&t, 45);
    insert_bst(&t, 45);
    insert_bst(&t, 2);
    inorder(t);
    printf("\n");
    postorder(t);
    printf("\n");
    preorder(t);
    printf("\n");
    return 0;
}*/