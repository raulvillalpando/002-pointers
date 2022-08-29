#include "pointers.h"

int main(void){
    int count = 5;
    int collection[5] = {69,420,666,911,13};
    int *collection_ptr = &collection[0];

    printf("Array Original:\n");
    printArray(collection_ptr,count);

    /*Bubbel Sort
    int swaps = bubble_sort(collection_ptr, count);
    printf("swaps = %d\n",swaps);
    printf("Array Bubble-Sorteado:\n");
    printArray(collection_ptr,count);*/

    /*Insertion Sort
    printf("Array Insert-Sorteado:\n");
    insertion_sort(collection_ptr,count);
    printArray(collection_ptr,count);*/

    /*Reverse
    printf("Array Reverseado:\n");
    reverse(collection_ptr,count);
    printArray(collection_ptr,count);*/

    /*Frequency
    int target = 69;
    int freq = calulate_frequency(collection_ptr,count,target);
    printf("El num %d se repite %d ",target,freq);*/

  return 0;
}
