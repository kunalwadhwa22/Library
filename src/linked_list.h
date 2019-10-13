#ifndef __LINKED_LIST_H
#define __LINKED_LIST_H

#include <stdbool.h>

#define dequeue_slinkedlist pop_slinkedlist

// linked list for an integer data type
struct node
{
    int data;
    struct node * next;
};

// File structure should contain the following basic APIs for a singly linked list
//  1. Insertion into a linked list
//  2. Deletion from a linked list
//  3. Printing the linked list
//  4. Returning the index of the item in a linked list

// Function to insert an element to a singly linked list after the node given as input
// Returns  1 : successful insertion
//          0 : unsuccessful insertion
bool insert_slinkedlist(int data, struct node ** current);

// Function to push an element to a singly linked list
// pushing inserts the new element at the start
//      Ex : 
//      Initial list    : element 0 (head), element 1, element 2, ... , element n-1, element n
//      push            : element Z
//      New List        : element Z (head), element 0, element 1, ... , element n-1, element n
bool push_slinkedlist(int data, struct node ** head);

// Function to pop an element from a single linked list 
// poping deletes the first element from the list
bool pop_slinkedlist(struct node **head);

// Function to add to the end of a singly linked list
bool queue_slinkedlist(int data, struct node **head);

// Function to delete from the start of the singly linked list
// TODO : define this in the #define as it is the same as pop_slinkedlist
bool dequeue_slinkedlist(struct node ** head);

// Function to delete after the node given as input
bool delete_after_node_slinkedlist(struct node * current);

// Function to delete the node at the given index
bool delete_at_index(int index, struct node ** head);

// Function to find the input data in the given linked list
// RETURNS :    index of the element where it was found if found
//              -1 if the element was not found
int find_slinkedlist(int data, struct node * head);

bool reverse_slinkedlist(struct node ** head);

// Function to print the elements in the singly linked list starting from the node given as input 
void print_slinkedlist(struct node * current);

// Test function to use and test all the APIs
void use_slinkedlist_apis();


#endif  // __LINKED_LIST_H