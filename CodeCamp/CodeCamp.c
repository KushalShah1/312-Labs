#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>

// CodeCamp.c -- EE 312 Project 1

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
 * Section 5 digit ID:16015
 *
 */



/* Determine the hamming distance between two int arrays.
   pre: aList != null, bList != null, aList.length == bList.length == len
   post: return hamming distance between the two arrays of ints.
   Neither parameter should be altered by this function.
*/
int hammingDistance(int aList[], int bList[], int len) {
  
    int differences=0;

    for(int i=0; i<len;i++){
        if(aList[i]!=bList[i])      //Checking whether elements are different
            differences++;
    }

    return differences;

}


/* Determine if two ints have the same last digit.
   Note that the last digit of 0 is 0 and the last digit of -12 is 2. 
   post: return true if num1 and num2 have the same last digit, false otherwise.
*/
bool lastDigit(int num1, int num2) {

    if(abs(num1)%10 == abs(num2)%10)        //Finding the last digit and comparing them
      return true;

    return false;

}

/* Determine the sum of the positive integers less than 1000 that are multiples of 3 or 5 (or both).
   post: return the sum of the integers from 1 to 1000 that are multiples of 3 or 5 or both.
*/
int sum3or5Multiples() {
    int sum=0;
    for(int i=1; i<1000;i++){
        if(i%3==0 || i%5==0)
            sum+=i;
  }
    return sum;
}

/* Reverse the digits of an integer. Return the reversed number if it is in the range of type int, 0 otherwise.
   post: return num with digits reversed if the reverse can be stored as an int, 0 otherwise.
*/
int reverseInt(int num) {

    int lastDigit;
    long rollingTotal=0;

    while(abs(num)>0){
        lastDigit=num%10;

        rollingTotal*=10;
        rollingTotal+=lastDigit;

        num/=10;
    }

    if(rollingTotal>INT_MAX || rollingTotal<INT_MIN)
        return 0;

    return (int)rollingTotal;
}

  

