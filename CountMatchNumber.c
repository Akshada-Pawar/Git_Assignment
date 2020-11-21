/*##################################################################

Name    - Shubham Jaykumar Patil
EmpID   - 214908
Email     - Shubham.Patil4@kpit.com
Location- Bangalore


Description - CountMatchNumber.c file count the number of occurrences of given number in the array

###################################################################*/

#include<stdio.h>

#include "CountMatchNumber.h"

void countMatchNumber(const int *arr, unsigned int size) {

    int n = 0;
    int counter = 0;
    printf("\nEnter a number:  ");          // take a number from the user
    scanf("%d", &n);

    for(int i = size-1; i >= 0; i--) {
            if(*(arr+i) == n)                       // if match found, increase counter by 1
                counter ++;
    }

    printf("Number of times %d appeared in the given array:  %d\n", n, counter);
}
