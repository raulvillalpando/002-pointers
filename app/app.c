#include "pointers.h"

int main(void){
    int count = 5;
    int collection[5] = {69,420,666,911,13};
    int *collection_ptr = &collection[0];

    bubble_sort(collection_ptr, count);


  return 0;
}
