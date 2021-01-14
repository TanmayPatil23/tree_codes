#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
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
}