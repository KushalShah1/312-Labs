//
// Created by kusha on 10/12/2019.
//

#ifndef MATHSTUFF_MATHSTUFF_H
#define MATHSTUFF_MATHSTUFF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//**********  Function Prototypes  ******************

//function isPrime
//input parameter - positive integer
//returns true if the number is prime, otherwise false
//

bool isPrime (int number);



//function printPrimes
//input parameter - positive integer
//Uses the isPrime method to print a list of prime numbers between 1 and n.

void printPrimes (int n);


//function findFibo
//input parameter - positive integer
//returns the nth fibonacci number where
//Fib(0) -> 0
//Fib(1) -> 1
//Fib(N) -> Fib(N-2) + Fib(N-1)

int findFibo (int n);


//function findFactors
//input parameter - positive integer
//prints the prime factors of the given number to standard output
//example output: 52=2*2*13 (or 52=1*2*2*13) or 13=prime

void findFactors (int number);

#endif //MATHSTUFF_MATHSTUFF_H
