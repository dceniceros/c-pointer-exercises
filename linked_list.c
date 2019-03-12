//
// Created by David Ceniceros on 3/12/2019
//

#include <stdio.h>

// node structure for a singly-linked list, holding a single int value
struct Node
{
    int data;
    struct Node *next;
};

// loop
void printList(struct Node *n)
{
    while (n != NULL)
    {
        printf("link contains: %d\n", n->data);
        n = n->next;
    }
}

void run_linked_list() {
    printf("\nRunning linked list\n");

    // head and tail pointers
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    struct Node* fourth = NULL;
    struct Node* fifth = NULL;

    // Initialize the linked list
    head  = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third  = (struct Node*)malloc(sizeof(struct Node));
    fourth  = (struct Node*)malloc(sizeof(struct Node));
    fifth  = (struct Node*)malloc(sizeof(struct Node));

    // list's head pointer
    head->data = 12; //assign data in first node
    head->next = second; // Link first node with second

    second->data = 34; //assign data to second node
    second->next = third;

    third->data = 56; //assign data to second node
    third->next = fourth;

    fourth->data = 78; //assign data to second node
    fourth->next = fifth;

    fifth->data = 90; //assign data to third node
    // list's tail pointer
    fifth->next = NULL;

    printList(head);

}

