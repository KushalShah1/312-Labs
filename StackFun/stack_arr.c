//
// Created by kusha on 9/28/2019.
//

#include <stdbool.h>
#include "stack_arr.h"
//intitalizes the stack
void makeStack(Stack312 *s){
    s->top=-1;
}
//checks if the stack is at max capacity
bool isFull(Stack312 s){
    return s.top==99;
}
//checks if the stack has anything in it
bool isEmpty(Stack312 s){
    return s.top==-1;
}
//pushes an element onto the stack
void push(StackEntry e,Stack312 *s){
    s->top++;
    s->elements[s->top]=e;
}
//pops an element off the stack and returns it
StackEntry pop(Stack312 *s){
    s->top--;
    return  s->elements[(s->top)+1];
}