/*##################################################################

Name    - Shubham Jaykumar Patil
EmpID   - 214908
Email     - Shubham.Patil4@kpit.com
Location- Bangalore


Description - ReverseArray.c file reverse the given array and stores the new array

###################################################################*/


#include<stdio.h>

#include "ReverseArray.h"

void reverseArray(const int *arr1, int *arr2, unsigned int size) {

    for(int i = size - 1; i >= 0; i--) {
        *(arr2 + i) = *(arr1 + (size - (i+1)));     // arr2[i] = arr1[size - (i-1)]
    }

}
