#include <stdio.h>
#include "mathStuff.h"
int main () {


    int testNum;

    //test for the isPrime function
    printf("Enter a test number - ");
    scanf("%d",&testNum);

    if (isPrime(testNum))
        printf("%d is prime\n",testNum);
    else
        printf("%d is not prime.", testNum);

    //test for printing primes
    printf("Enter n to print the prime numbers between 1 and n: ");
    scanf("%d",&testNum);

    printPrimes(testNum);

    printf("\n");

    //test for Fibonacci number finder
    printf("Which Fibonacci number? ");
    scanf("%d",&testNum);

    printf("The %d Fibonacci number is : %d \n", testNum, findFibo(testNum));

    printf("\n");

    //test for prime factors
    printf("Factor what number? ");
    scanf("%d",&testNum);

    findFactors(testNum);

    return 0;
}



bool isPrimeHelper(int number, int divisor){
    if(number%divisor==0)
        return false;
    if(divisor>=(number/2)+1)
        return true;
    return isPrimeHelper(number, divisor+1);
}
//function isPrime
//input parameter - positive integer
//returns true if the number is prime, otherwise false
//

bool isPrime (int number) {
    const int START_DIVISOR = 2; //HINT: You may want a helper function

    if(number<2)
        return true;
    return isPrimeHelper(number,START_DIVISOR);
}


//function printPrimes
//input parameter - positive integer
//Uses the isPrime method to print a list of prime numbers between 1 and n.

void printPrimes (int n) {
    if(n>1) {
        printPrimes(n - 1);
        if (isPrime(n))
            printf(",%d", n);

    }
    if(n==1)
        printf("1");
}



//function findFibo
//input parameter - positive integer
//returns the nth fibonacci number where
//Fib(0) -> 0
//Fib(1) -> 1
//Fib(N) -> Fib(N-2) + Fib(N-1)

int findFibo (int n) {

    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return(findFibo(n-2)+findFibo(n-1));

}




void findFactorsHelper(int number, int divisor){
    if(isPrime(number))
        printf("%d",number);
    else if(number%divisor==0){
        printf("%d*",divisor);
        findFactorsHelper(number/divisor,divisor);
    }
    else
        findFactorsHelper(number,divisor+1);

}
//function findFactors
//input parameter - positive integer
//prints the prime factors of the given number to standard output
//example output: 52=2*2*13 (or 52=1*2*2*13) or 13=prime

void findFactors (int number) {
    const int START_DIVISOR = 2; //HINT: You may want a helper function
    findFactorsHelper(number, START_DIVISOR);
    //YOUR CODE GOES HERE

}
