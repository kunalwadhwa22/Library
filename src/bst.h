#ifndef __BST_H
#define __BST_H

// File for APIs related to Binary Search Tree
// Contains APIs for
//      Getting a new node          ->      new_bstnode
//      Inorder BST Traversal       ->      bst_inorder
//      Inserting into a BST        ->      
//      Deleting from a BST

#include <stdbool.h>

struct bst_node
{
    int key;
    struct bst_node *left, *right;
};

// Function that gives a new bst node, given the key as arguement
struct bst_node * new_bstnode(int key);

// Function for 'inorder' traversal of a BST node   
void bst_inorder(struct bst_node * root);

// Function to insert a node in a BST
struct bst_node * bst_insert(struct bst_node * node, int key);

// Function to delete a key from a BST
struct bst_node * bst_delete(struct bst_node * root, int key);

// Function to get the minimum value stored in a BST
struct bst_node *bst_minkey(struct bst_node * node);

// Function to sample use BST APIs
void use_bst();


#endif // not __BST_H