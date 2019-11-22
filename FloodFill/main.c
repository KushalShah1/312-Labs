#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* Prints out the 2d array to the console
 * Inputs: the array, number of rows and columns
 * Outputs: none
 */
void showPicture(char *picture[], int numRows, int numCols);
void floodFill(char *picture[], int numRows, int numCols,char colorToReplace, int chosenRow, int chosenCol, char replacementColor);

int main(int argc, char *argv[]) {

    char *picture[25];
    int picCols = 0;
    int picRows = 0;
    int chosenRow;
    int chosenCol;
    char chosenColor;
    char colorToFlood;

    FILE *fptr;
    //fptr = fopen(argv[1], "r");
    fptr = fopen("C:\\Users\\kusha\\Desktop\\312\\FloodFill\\fake_picture.txt","r");

    if (fptr == NULL) {
        exit(-42);              //if the file doesnt exist throw an error and exit
    }
    char buf[BUFSIZ];

    while (fgets(buf, sizeof(buf), fptr)) {
        picCols = strlen(buf);
        picture[picRows] = (char *) malloc(picCols);
        strcpy(picture[picRows], buf);//copies the txt file into picture
        picRows++;        //increments picrows every line read in
    }
    while (true) {
        showPicture(picture, picRows, picCols);
        chosenRow = -42;
        while (chosenRow == -42) {                //Asks for a valid row until it gets a valid row
            printf("Enter a row:");
            scanf("%d", &chosenRow);
            if (chosenRow == -1)
                return 0;
            if (chosenRow > picRows - 1 || chosenRow < 0) {
                printf("Error, Invalid row number \n");
                chosenRow = -42;
            }
        }
        chosenCol = -42;
        while (chosenCol == -42) {              //Asks for a valid column until it gets a valid column.
            printf("Enter a column:");
            scanf("%d", &chosenCol);
            if (chosenCol > picCols - 1 || chosenCol < 0) {
                printf("Error, Invalid column number \n");
                chosenCol = -42;
            }
        }
        chosenColor = -77;
        printf("Enter a color:");       //Asks for a char until it gets a char.
        while (chosenColor == -77)
            scanf(" %c", &chosenColor);
        colorToFlood = picture[chosenRow][chosenCol];
        if(colorToFlood!=chosenColor)
            floodFill(picture, picRows, picCols, colorToFlood, chosenRow, chosenCol, chosenColor);

    }
}

void showPicture(char *picture[], int numRows, int numCols){
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++)       //Prints evey pixel one by one
            printf("%c", picture[i][j]);
        printf("\n");
    }
    printf("\n");
}

void floodFill(char *picture[], int numRows, int numCols,char colorToReplace, int chosenRow, int chosenCol, char replacementColor){
    if(chosenRow>=0 && chosenCol>=0 && chosenRow<numRows && chosenCol<numCols){
        if(picture[chosenRow][chosenCol]==colorToReplace){
            picture[chosenRow][chosenCol]=replacementColor;
            floodFill( picture,  numRows,  numCols, colorToReplace,  chosenRow-1,  chosenCol-1,  replacementColor);
            floodFill( picture,  numRows,  numCols, colorToReplace,  chosenRow-1,  chosenCol,  replacementColor);
            floodFill( picture,  numRows,  numCols, colorToReplace,  chosenRow-1,  chosenCol+1,  replacementColor);
            floodFill( picture,  numRows,  numCols, colorToReplace,  chosenRow,  chosenCol+1,  replacementColor);
            floodFill( picture,  numRows,  numCols, colorToReplace,  chosenRow+1,  chosenCol+1,  replacementColor);
            floodFill( picture,  numRows,  numCols, colorToReplace,  chosenRow+1,  chosenCol,  replacementColor);
            floodFill( picture,  numRows,  numCols, colorToReplace,  chosenRow+1,  chosenCol-1,  replacementColor);
            floodFill( picture,  numRows,  numCols, colorToReplace,  chosenRow,  chosenCol-1,  replacementColor);
        }
    }
}