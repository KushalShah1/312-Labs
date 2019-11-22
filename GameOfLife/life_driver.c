//life_driver.c
//
//Life Driver program
//Roger Priebe 9/5/2018
//EE 312


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

//This file is a driver program for the life.c module.
//This program must work with your implementations life.h and life.c
//Do not change the function definitions for populateWorld, showWorld or
//iterateGeneration.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "life.h"


int main(int argc, char *argv[]) {

    //const int numGenerations=99;
    const int numGenerations  = atoi(argv[2]); //gets the numGenerations from the command line
    const int MAX_ROWS = 80; //we want the world to fit on one screen

   //array of strings that will hold the grid
    char *world[MAX_ROWS];
    int numRows=0;
    int numCols=0;

    populateWorld(argv[1], world, &numRows, &numCols);//feeds the file name from command line to populate world
    showWorld(world, numRows, numCols);

    for (int iteration = 0; iteration < numGenerations; iteration++) {
        system("clear");
        iterateGeneration(world, numRows, numCols);

        showWorld(world, numRows, numCols);
    }

    return 0;
}



