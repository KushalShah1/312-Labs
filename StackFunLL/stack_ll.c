//
// Created by kusha on 9/28/2019.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stack_ll.h"

//Initializes the stack
void makeStack(Stack312 *s){
    s->top=NULL;
}
//A linked list is never full. So isFull always returns false
bool isFull(Stack312 s){
    return false;
}
//Checks if the linked list is empty
bool isEmpty(Stack312 s){
    return s.top==NULL;
}
//pushes a pixel onto the stack
void push(StackEntry e,Stack312 *s){
    StackNode *temp = (StackNode *) malloc(sizeof(StackNode)); //allocates space for a stacknode
    temp->pixel=e;  //sets the data of the node

    temp->next = s->top; //sets the pointer of the node
    s->top = temp;      //sets the head of the stack
}

StackEntry pop(Stack312 *s){
    StackEntry temp;    //makes a temp pixel to return
    temp=s->top->pixel; //copies the pixel data into temp

    StackNode *temp2=s->top->next;  //creates a temp point to preserve the new head
    free(s->top);   //de-allocates the stack node
    s->top=temp2;   //sets the new head

    return temp;    //returns the pixel
}