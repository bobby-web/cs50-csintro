#include <stdio.h>
#include <stdlib.h>

int  main(void){
    typedef struct node
    {
        int number;
        struct node *next;
    }
    node;


    node *list=NULL; // Initialize ssl node

    node *n=malloc(sizeof(node)); // Create first node and assign to temp variable called n
    if (n!=NULL){ // Always check if malloc ed n is not a NULL pointer
        (*n).number=1; // Assign value 1 to node, can also be simplified by "n->number=1;"
        n->next=NULL; // simplyfied version of assign next struct element using (->) operator
        list = n; // Point new node
    }
    node *n=malloc(sizeof(node)); // Create second node and assign to temp variable called n
    if (n!=NULL){ // Always check if malloc ed n is not a NULL pointer
        n->number=2; // Assign value 2 to node
        n->next=NULL; // simplyfied version of assign next struct element using (->) operator
        list->next = n; // Point new node to add new node
    }
    node *n=malloc(sizeof(node)); // Create first node and assign to temp variable called n
    if (n!=NULL){
        n->number=3;
        n->next=NULL;
        list->next->next = n;
    }
}