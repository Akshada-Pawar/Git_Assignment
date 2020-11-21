/*##################################################################

Name    - Shubham Jaykumar Patil
EmpID   - 214908
Email     - Shubham.Patil4@kpit.com
Location- Bangalore


Description - DeletionOfElement.c file delete the specified element from the array

###################################################################*/

#include <stdio.h>
#include <stdlib.h>

#include "DeletionOfElement.h"


static void delete_location(int*, int, unsigned int*);

void deleteElement(int *arr, unsigned int *size) {

    int n = 0;
    printf("\nEnter an element to delete: ");
    scanf("%d", &n);

    for(int i = *size - 1; i >= 0; i--) {
        if(*(arr + i) == n) {                                                                           // if element found, call delete_location()
            delete_location(arr, i, size);                                                       //  pass - array, element location, and address of size variable
         }
    }

}


static void delete_location(int *arr, int num_location, unsigned int *size) {

    for(int i = num_location; i < *size - 1; i++) {
        *(arr + i) = *(arr + (i+1));                                                                    // shift elements (from element location onwards) to the left
    }
    // new size value assigned
    *size = *size - 1;                                                                                      // assign new size value (decrement by 1)

}
