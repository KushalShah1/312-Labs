//
// Created by kusha on 9/29/2019.
//
#include <stdio.h>
#include <stdlib.h>
#include "stack_ll.h"
#include <string.h>

/* Prints out the 2d array to the console
 * Inputs: the array, number of rows and columns
 * Outputs: none
 */
void showPicture(char *picture[], int numRows, int numCols);

/*Gets the user input for row, col, and color to start the fill
 * Inputs: a row, col, and color pointer. Also the dimensions of the array
 * Outputs: none
 */
void getStartingPlace(int *row, int *col, char *color, int i, int j);

int main(int argc, char *argv[]){
    Stack312 pixels;
    makeStack(&pixels);

    char* picture[25];
    int picCols=0;
    int picRows=0;
    int chosenRow;
    int chosenCol;
    char chosenColor;
    char colorToFlood;

    FILE *fptr;
    fptr = fopen(argv[1], "r");

    if (fptr == NULL) {
        exit(-42);              //if the file doesnt exist throw an error and exit
    }
    char buf[BUFSIZ];

    while(fgets(buf, sizeof(buf), fptr)) {
        picCols=strlen(buf)-1;     //strlen includes the null terminator, so I subtracted 1 to account for it
        picture[picRows] = (char *)malloc(picCols);
        strcpy(picture[picRows], buf);//copies the txt file into picture
        picRows++;        //increments picrows every line read in
    }

    showPicture(picture,picRows,picCols);
    getStartingPlace(&chosenRow,&chosenCol,&chosenColor,picRows,picCols);   //get the user input
    colorToFlood=picture[chosenRow][chosenCol];

    StackEntry starter={chosenRow,chosenCol,chosenColor};   //starter point pixel
    push(starter,&pixels);                                  //push it so the stack has a starting point

    while(!isEmpty(pixels)){        //while the stack is not full
        StackEntry temp=pop(&pixels);
        int x=temp.row;
        int y=temp.col;
        for (int i=-1; i<2; i++){               //starts at the previous row and previous col
            for (int j=-1; j<2; j++) {
                if (x+i>=0 && x+i<picRows && y+j>=0 && y+j<picCols && !(i==0 && j==0)) {   //making sure that x and y are not at the corners
                    if(picture[x+i][y+j]==colorToFlood) {   //if the neighbor is the color to fill
                        StackEntry entryToBePushed={x+i,y+j,picture[x+i][y+j]}; //push that pixel to stack
                        push(entryToBePushed,&pixels);
                        }
                    }
                }
            }
        picture[x][y]=chosenColor;  //change the current pixel to the new color
    }
    showPicture(picture,picRows,picCols);   //show the picture after flood fill


    return 0;
}

void showPicture(char *picture[], int numRows, int numCols){
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++)       //Prints evey pixel one by one
            printf("%c", picture[i][j]);
        printf("\n");
    }
    printf("\n");
}
void getStartingPlace(int *chosenRow, int *chosenCol, char *chosenColor, int picRows, int picCols){
    *chosenRow=-42;
    while(*chosenRow==-42) {                //Asks for a valid row until it gets a valid row
        printf("Enter a row:");
        scanf("%d", &*chosenRow);
        if (*chosenRow > picRows-1 || *chosenRow < 0) {
            printf("Error, Invalid row number \n");
            *chosenRow=-42;
        }
    }
    *chosenCol=-42;
    while(*chosenCol==-42) {              //Asks for a valid column until it gets a valid column.
        printf("Enter a column:");
        scanf("%d", &*chosenCol);
        if (*chosenCol > picCols-1 || *chosenCol < 0) {
            printf("Error, Invalid column number \n");
            *chosenCol=-42;
        }
    }
    *chosenColor=-77;
    printf("Enter a color:");       //Asks for a char until it gets a char.
    while(*chosenColor==-77)
        scanf(" %c",chosenColor);
}