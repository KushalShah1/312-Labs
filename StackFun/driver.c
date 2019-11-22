//
// Created by kusha on 9/29/2019.
//
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stack_arr.h"
#include <string.h>
int main(int argc, char *argv[]){

    char equation[80];
    int length=0;
    Stack312 parenthesis;
    makeStack(&parenthesis);
    bool valid;
    char invalidMessage[20];

    FILE *fptr;
    fptr = fopen(argv[1], "r");
    //fptr = fopen("C:\\Users\\kusha\\Desktop\\312\\StackFun\\equations.txt", "r");

    if (fptr == NULL) {
        exit(-42);              //if the file doesnt exist throw an error and exit
    }
    char buf[BUFSIZ];

    while(fgets(buf, sizeof(buf), fptr)) {
        length=strlen(buf);     //finding the length of the equation
        strcpy(equation, buf);  //putting the equation into my equation array
        valid=true;             //initial condition is that equation is valid
        strcpy(invalidMessage, "Valid Expression");
        int i=0;

        while(valid && i<length){   //while the equation is still valid and not past the length of the equation
            switch (equation[i]){
                case '(':
                case '[':
                case '{':
                case '<':
                    push(equation[i],&parenthesis);     //if is char is an opener push it onto the stack
                    break;

                case ')':
                    if(isEmpty(parenthesis)||pop(&parenthesis)!='(') {          //if its a closer pop off the previous
                        valid = false;                                          //element and see if if matches
                        strcpy(invalidMessage, "Missing (");                    //if it doesnt match, then set the flag
                    }                                                           //to false and set an invalid message
                    break;
                case ']':
                    if(isEmpty(parenthesis)||pop(&parenthesis)!='[') {
                        valid = false;
                        strcpy(invalidMessage, "Missing [");
                    }
                    break;
                case '}':
                    if(isEmpty(parenthesis)||pop(&parenthesis)!='{') {
                        valid = false;
                        strcpy(invalidMessage,"Missing {");
                    }
                    break;
                case '>':
                    if(isEmpty(parenthesis)||pop(&parenthesis)!='<') {
                        valid = false;
                        strcpy(invalidMessage,"Missing <");
                    }
                    break;
            }
            i++;
        }

        if(!isEmpty(parenthesis)&&valid){       //if the stack is not empty after checking the entire equation that
            strcpy(invalidMessage,"Too many "); //means that the equation has too many openers
            invalidMessage[9]=pop(&parenthesis);
            invalidMessage[10]='\0';
        }

        for(int j=0;j<length-1;j++){    //prints out the equation without newline and message of validity
            printf("%c",equation[j]);
        }

       	printf(" === %s\n",invalidMessage); //print the error message

    }

    return 0;
}
