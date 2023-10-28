//
//  main.c
//  Linked List
//
//  Created by Amaan Saifi on 02/11/21.
//  Creating a Linked List.

#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

void printl(struct node* n)
{
    while(n!=NULL)
    {
        printf("%d\n",n->data);
        
        n=n->next;
    }
}

int main(void)
{
    // insert code here...
    printf("Hello, World! Let me show you Linked List\n");
    
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;
    
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    
    head->data = 1;
    head->next = second;
    
    second->data = 2321;
    second->next = third;
    
    third->data = 24234;
    third->next = NULL;
    
    
    printl(head);//print linked list function.
    
    return 0;
}
