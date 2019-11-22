/* Student information for project:
 *
 * Replace <NAME> with your name.
 *
 * On my honor, Kushal Shah, this programming project is my own work
 * and I have not provided this code to any other student.
 *
 * Name: Kushal Shah
 * email address: kushalshah@flash.net
 * UTEID: khs722
 * Section 5 digit ID: 16045
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void populateWorld(char fName[], char *grid[], int *numRows, int *numCols){
    FILE *fptr;
    fptr = fopen(fName, "r");

    if (fptr == NULL) {
        exit(-42);              //if the file doesnt exist throw an error and exit
    }
    char buf[BUFSIZ];

    while(fgets(buf, sizeof(buf), fptr)) {
        *numCols=strlen(buf)-1;     //strlen includes the null terminator, so I subtracted 1 to account for it
        grid[*numRows] = (char *)malloc(*numCols);
        strcpy(grid[*numRows], buf);//copies the txt file into grid
        *numRows=*numRows+1;        //increments numrows every line read in
    }

}

void showWorld(char *grid[], int numRows, int numCols){
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++)
            if(grid[i][j]=='1')
                printf("*");    //if the cell is alive print *
            else
                printf(".");    //if its dead print .
        printf("\n");
    }
    printf("\n");
}
int numberOfNeighbors(int x, int y, char *grid[], int numRows, int numCols){
    int neighbors=0;
    for (int i=-1; i<2; i++){               //starts at the previous row and previous col
        for (int j=-1; j<2; j++) {
            if (x+i>=0 && x+i<numRows && y+j>=0 && y+j<numCols) {   //making sure that x and y are not at the corners
                if(grid[x+i][y+j]=='1')
                    neighbors++;
            }
        }
    }
    if(grid[x][y]=='1')// the for loop includes x,y so if the cell is alive the number of neighbors will be off by one
        neighbors--;
    return neighbors;
}
bool isAlive(int x, int y, char *grid[], int numRows, int numCols){
    int neighbors=numberOfNeighbors( x, y, grid, numRows, numCols);

    if(grid[x][y]=='0'){    //if the cell is dead
        if(neighbors==3)    //only alive if exactly 3 neighbors
            return true;
        else
            return false;
    }
    else{
        if(neighbors>=4||neighbors<=1)  //if the cell is alive, to be dead need to be >=4 neighbors or <=1 neighbor
            return false;
        else
            return true;
    }

}

void iterateGeneration(char *grid[], int numRows, int numCols){
    char **tempGrid=(char **) malloc((numRows) * sizeof(char *));//mallocing an array of pointers for numrows
    for(int i=0; i<numRows; i++){
        tempGrid[i]=(char *) malloc(numCols* sizeof(char)); //mallocing space for numcols of char
        for(int j=0; j<numCols; j++){
            if (isAlive(i,j,grid,numRows,numCols)){     //if the updated cell is alive
                tempGrid[i][j]='1';                     //update the tempgrid to be alive
            }
            else{
                tempGrid[i][j]='0';
            }
        }
    }

    for(int i=0; i<numRows; i++) {
        for(int j=0; j<numCols;j++)
            grid[i][j]=tempGrid[i][j];  //copy the temp into grid
        free(tempGrid[i]);              //freeing up the tempgrid in the heap
    }
    free(tempGrid);
}