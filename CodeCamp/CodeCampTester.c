#include<stdio.h>
#include<stdbool.h>


// CodeCampTester.c -- EE 312 Project 1 -- Tester class

/* Student information for assignment:
 * 
 * Name: Kushal Shah
 * email address: kushalshah@flash.net
 * UTEID: khs722
 * Section 5 digit ID: 16015
 *  
 */

//function prototypes. These will be completed in CodeCamp.c
int hammingDistance(int aList[], int bList[], int len);
int sum3or5Multiples();
bool lastDigit(int num1, int num2);
int reverseInt(int num); 
//****************************

int main() {
  // My test 1, hammingDistance
  int h7[] = {2,4,7,2,11,33,6,2,7,1};
  int h8[] = {2,4,6,2,1,33,6,2,-17,1};
  int expected = 3;
  int actual = hammingDistance(h7, h8, 10);
  printf("My test 1 hamming distance: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  
     printf("passed my test 1, hamming distance\n\n");
  else 
     printf("**** FAILED **** my test 1, hamming distance\n\n");

  // My test 2, hamming distance
  int h9[] = {1,5,6,9,1,3,5,9,21,0};
  int h10[] = {1,5,6,9,1,3,5,9,21,0};
  expected = 0;
  actual = hammingDistance(h9, h10, 10);
  printf("My test 2 hamming distance: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  
     printf("passed my test 2, hamming distance\n\n");
  else 
     printf("**** FAILED **** my test 2, hamming distance\n\n");

  // test 3, hamming distance
  int h11[] = {1,2,3,4,5,6,7,8,9,10};
  int h12[] = {2,3,4,5,6,7,8,9,10,11};
  expected = 10;
  actual = hammingDistance(h11, h12, 10);
  printf("My test 3 hamming distance: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  
     printf("passed my test 3, hamming distance\n\n");
  else 
     printf("**** FAILED **** my test 3, hamming distance\n\n");

  //My test 4, last digit
  int n1 = 9;
  int n2 = 109;
  expected = true;
  actual = lastDigit(n1, n2);
  printf("My test 4 last digit: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  
     printf("passed my test 4, last digit\n\n");
  else 
     printf("**** FAILED **** my test 4, last digit\n\n");

  // test 5, last digit
  n1 = -2828;
  n2 = 8;
  expected = true;
  actual = lastDigit(n1, n2);
  printf("My test 5 last digit: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  
    printf("passed my test 5, last digit\n\n");
  else 
     printf("**** FAILED **** my test 5, last digit\n\n");

  // test 6, last digit
  n1 = 9;
  n2 = 777;
  expected = false;
  actual = lastDigit(n1, n2);
  printf("My test 6 last digit: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)   
    printf("passed my test 6, last digit\n\n");
  else 
     printf("**** FAILED **** my test 6, last digit\n\n");

  // test 7, sum of multiples of 3 or 5
  expected = 233168;
  actual = sum3or5Multiples();
  printf("Test 7 sum of multiples: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  
     printf("passed test 7, sum of multiples of 3 or 5\n\n");
  else 
     printf("**** FAILED **** test 7, sum of multiples of 3 or 5\n\n");

  // test 8, reverse int
  n1 = 142;
  expected = 241;
  actual = reverseInt(n1);
  printf("My test 8 reverse int: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  
     printf("passed test 8, reverse int\n\n");
  else 
     printf("**** FAILED **** test 8, reverse int\n\n");

  // test 9, reverse int
  n1 = 864;
  expected = 468;
  actual = reverseInt(n1); 
  printf("My test 9 reverse int: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  
     printf("passed test 9, reverse int\n\n");
  else 
     printf("**** FAILED **** test 9, reverse int\n\n");

  // test 10, reverse int
  n1 = 20012;
  expected = 21002;
  actual = reverseInt(n1); 
  printf("My test 10 reverse int: expected value: %d, actual value: %d\n", expected, actual);

  if(expected == actual)  
     printf("passed test 10, reverse int\n");
  else 
     printf("**** FAILED **** test 10, reverse int\n");

}

