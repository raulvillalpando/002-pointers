//
// Created by Josean Camarena on 07/07/22.
// Implemented by: $STUDENT$
//

#include "pointers.h"

void printArray(int *array, int count){
    for(int a = 0; a < count; a++){
        printf("%d\n",*array);
        array++;
    }
}

int bubble_sort(int *target, int count){

    printArray(target, count);
    int i, j, swaps = 0;
    for (i = 0; i < count-1; i++){
        for (j = 0; j < count-i-1; j++){
            if (*(target+j) > *(target+j+1)){
                int pivote = *(target+j);
                *(target+j) = *(target+j+1);
                *(target+j+1) = pivote;
                swaps++;
            }
        }
    }
    printf("Array Bubble - Sorteado\n");
    printArray(target, count);
    printf("swaps = %d\n",swaps);

  return 0;
}

void insertion_sort(int *collection, int count)
{

}

void reverse(int *collection, int count){

}

int calulate_frequency(int *collection, int count, int target)
{
  return 0;
}
