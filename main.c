/*##################################################################

Name    - Shubham Jaykumar Patil
EmpID   - 214908
Email     - Shubham.Patil4@kpit.com
Location- Bangalore


Description - main.c implements the functionality of other .c files

###################################################################*/


#include <stdio.h>
#include <stdlib.h>

#include "ReverseArray.h"
#include "CountMatchNumber.h"
#include "CountPosNegOddEven.h"
#include "BubbleSort.h"
#include "DeletionOfElement.h"

int main()
{

    unsigned int size = 30;
    int array[size];
    int r_arr[size];                                                // stores reversed array
    unsigned int choice = 0;

    printf("\nEnter 30 array elements\n");


    for(int i = 0; i < size; i++) {                         // take inputs from the user
        scanf("%d", &array[i]);
    }

    printf("\nArray: ");                                        // display array
    for(int i = 0; i < size; i++) {
        printf("%d, ", array[i]);
    }

    int run = 1;

    while(run) {

        // gives user choice to select next operation
        printf("\n\n1.Reverse Array\n2.Count Match Numbers\n3.Count positive, negative, odd, and even numbers\n4.Sort Array\n5.Delete Specific Element");
        printf("\nEnter choice :  ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                reverseArray(array, r_arr, size);               // reverse the array and store it in "r_arr"
                printf("\nReversed array\n");
                for(int i = 0; i < size; i++)                           // displays reversed array
                    printf("%d, ", r_arr[i]);

                break;

            case 2:
                countMatchNumber(array, size);              // count number of occurrence of given number
                break;

            case 3:
                countPosNegOddEven(array, size);        // finds frequency of positive, negative, odd, and even numbers
                break;

            case 4:
                bubbleSort(array, size);                            // bubble sort given array
                printf("\nSorted array:\n");
                for(int i = 0; i < size; i++)                         // display sorted array
                    printf("%d, ",array[i]);

                break;

            case 5:
                deleteElement(array, &size);                    // delete given element from the array - address of size passed, because after deletion size will be different
                printf("After deletion: ");
                for(int i = 0; i<size; i++)                           // display remaining array
                    printf("%d, ", array[i]);

                break;

            default:
                run = 0;                                                       // if invalid choice, stop
                break;
        }
    }

    return 0;
}
