/*##################################################################

Name    - Shubham Jaykumar Patil
EmpID   - 214908
Email     - Shubham.Patil4@kpit.com
Location- Bangalore


Description - CountPosNegOddEven.c file counter frequencies of positive, negative, odd, and even numbers in the array

###################################################################*/

#include<stdio.h>

#include "CountPosNegOddEven.h"

void countPosNegOddEven(const int *arr, unsigned int size) {
    unsigned int posCounter = 0;
    unsigned int negCounter = 0;
    unsigned int oddCounter = 0;
    unsigned int evenCounter = 0;

    for(int i = size - 1; i >= 0; i--) {

        if(*(arr + i) < 0)                          // if number is negative
            negCounter ++;
        else
            posCounter ++;                      // else number is positive

        if(*(arr + i) % 2 == 0)                 // if number is even
            evenCounter ++;
        else                                            // else number is odd
            oddCounter ++;
    }

    printf("\nNumber of positive numbers:  %d\n", posCounter);
    printf("Number of negative numbers:  %d\n", negCounter);
    printf("Number of even numbers:  %d\n", evenCounter);
    printf("Number of odd numbers:  %d\n", oddCounter);
}
