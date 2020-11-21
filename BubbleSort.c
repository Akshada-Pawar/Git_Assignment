/*##################################################################

Name    - Shubham Jaykumar Patil
EmpID   - 214908
Email     - Shubham.Patil4@kpit.com
Location- Bangalore


Description - BubbleSort.c sorts the given array in ascending order

###################################################################*/

#include "BubbleSort.h"

static void swap(int*, int*);


void bubbleSort(int *arr,  unsigned int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - 1; j++ ) {
            if(*(arr + j) > *(arr + (j + 1))) {             // if previous element is larger than next one then, swap
                swap((arr+j), (arr+(j+1)));
            }
        }
    }
}


static void swap(int *a, int *b) {

    int temp = 0;

    temp = *a;
    *a = *b;
    *b = temp;
}
