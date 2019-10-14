#include "bst.h"
#include <stdio.h>
#include <stdlib.h>
#include "debug.h"

struct bst_node * new_bstnode(int key)
{
    struct bst_node * temp = (struct bst_node *)malloc(sizeof(struct bst_node));
    temp -> key = key;
    temp -> left = NULL;
    temp -> right = NULL;
    return temp;
}

void bst_inorder(struct bst_node * root)
{
    if(root != NULL)
    {
        bst_inorder(root -> left);
        printf("%d ", root-> key);
        bst_inorder(root -> right);
    }
}

struct bst_node * bst_insert(struct bst_node * node, int key)
{
    if(node == NULL)
        return new_bstnode(key);
    if(key < node -> key)
        node -> left = bst_insert(node -> left, key);
    else if(key > node -> key)
        node -> right = bst_insert(node -> right, key);
    return node;
}

struct bst_node * bst_delete(struct bst_node * root, int key)
{
    if(root == NULL)
        return root;
    
    if(key < root->key)
        root->left = bst_delete(root->left, key);
    else if(key > root->key)
        root->right = bst_delete(root->right, key);
    else
    {
        // 1 or 0 children
        if(root->left == NULL)
        {
            struct bst_node * temp = root -> right;
            free(root);
            return temp;
        }
        else if(root -> right == NULL)
        {
            struct bst_node * temp = root -> left;
            free(root);
            return temp;
        }

        // nodes with 2 childer
        struct bst_node * temp = bst_minkey(root -> right);
        root -> key = temp -> key;
        root -> right = bst_delete (root -> right, temp -> key);
    }
    return root;
}

struct bst_node *bst_minkey(struct bst_node * node)
{
    struct bst_node * current = node;
    while(current && current->left != NULL)
        current = current -> left;
    return current;
}


void use_bst()
{
    struct bst_node * root = NULL;
    root = bst_insert(root,50);
    bst_insert(root, 30);
    bst_insert(root, 80);
    bst_insert(root, 20);
    bst_insert(root, 100);

    bst_inorder(root);
    
    printDebug(bst_minkey(root)->key);
    
    bst_delete(root,50);
    bst_inorder(root);
    
    printDebug(root->key);
    
}
