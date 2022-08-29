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

  return swaps;
}

void insertion_sort(int *collection, int count){
    int i, key, j;
    for (i = 1; i < count; i++){
        key = *(collection+i);
        j = i-1;
        while (j >= 0 && *(collection+j) > key){
            *(collection+j+1) = *(collection+j);
            j = j-1;
        }
        *(collection+j+1) = key;
    }
}

void reverse(int *collection, int count){
    int i, j, temp;
    for (i = 0, j = count-1; i < j; i++, j--){
        temp = *(collection+i);
        *(collection+i) = *(collection+j);
        *(collection+j) = temp;
    }
}

int calulate_frequency(int *collection, int count, int target){
    int frequency = 0, i;
    for (i = 0; i < count; i++)
        if (*(collection+i) == target)
            frequency++;
    return frequency;
}
