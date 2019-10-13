#include "linked_list.h"
#include "stdio.h"
#include "stdlib.h"


bool insert_slinkedlist(int data, struct node ** current)
{
    if((*current) == NULL)
    {
        // no memory associated with the input linked list or node
        // creating a new list
        (*current) = (struct node *)malloc(sizeof(struct node));
        (*current)->data = data;
        (*current)->next = NULL;
        return 1;   // successful creation of a singly linked list and addition of data
    }
    // before : current, current->next
    // after : current, temp, current->next
    struct node * temp = NULL;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = (*current)->next;
    (*current)->next = temp;
    return 1; // successful addition 
}

bool push_slinkedlist(int data, struct node ** head)
{
    if((*head) == NULL)
    {
        (*head) = (struct node *)malloc(sizeof(struct node));
        (*head)->data = data;
        (*head)->next = NULL; 
        return 1;
    }
    struct node * temp = NULL;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = (*head);
    (*head) = temp;
    return 1;
}

bool pop_slinkedlist(struct node **head)
{
    if((*head) ==  NULL)
    {
        // nothing to delete
        return 0;
    }
    struct node * temp;
    temp = (*head);
    (*head) = (*head)->next;
    // TODO : change printf to printdebug
    // printdebug should have the functionality to enable and disable from outside
    printf("Deleted : %d \n", temp->data);
    free(temp);
    return 1;
}

bool queue_slinkedlist(int data, struct node **head)
{
    if((*head) == NULL)
    {
        (*head) = (struct node *)malloc(sizeof(struct node));
        (*head)->next = NULL;
        (*head)->data = data;
    }
    struct node * current = NULL;
    current = (*head);
    print_slinkedlist(current);
    while (current->next != NULL)
    {
        current = current->next;
    }
    struct node * temp = NULL;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    current->next = temp;
    return 1;
}

bool delete_after_node_slinkedlist(struct node * current)
{
    if(current == NULL)
    {
        // nothing to delete
        return 0;
    }
    if(current->next == NULL)
    {
        return 0;
    }
    struct node * temp = NULL;
    temp = current->next;
    current->next = current->next->next;
    free(temp);
    return 1;
}

int find_slinkedlist(int data, struct node * head)
{
    if(head == NULL)
    {
        // empty / invalid linked list
        return -1;
    }
    for(int i = 0; head != NULL; i++, head=head->next)
    {
        if(head->data == data)
        {
            return i;
        }
    }
    return -1;
}

void print_slinkedlist(struct node * current)
{
    while(current!=NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

bool reverse_slinkedlist(struct node ** head)
{
    struct node *current = *head;
    struct node *prev = NULL;
    struct node *next = NULL;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
    return 1;
}

void use_slinkedlist_apis()
{
    struct node * first = NULL;
    struct node * headone = NULL;
    insert_slinkedlist(5, &first);
    insert_slinkedlist(10, &first);
    insert_slinkedlist(15, &first);
    print_slinkedlist(first);

    push_slinkedlist(5, &headone);
    push_slinkedlist(10, &headone);
    push_slinkedlist(15,&headone);
    print_slinkedlist(headone);
    pop_slinkedlist(&headone);
    print_slinkedlist(headone);
    pop_slinkedlist(&headone);
    print_slinkedlist(headone);

    queue_slinkedlist(20,&first);
    print_slinkedlist(first);
    dequeue_slinkedlist(&first);
    print_slinkedlist(first);

    printf(" Element found at : %d \n",find_slinkedlist(10,first));
    print_slinkedlist(first);
    reverse_slinkedlist(&first);
    print_slinkedlist(first);


    delete_after_node_slinkedlist(first);
    print_slinkedlist(first);
    printf(" Element found at : %d \n",find_slinkedlist(10,first));

}
