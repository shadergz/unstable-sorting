/*

 *  Source code written by Gabriel Correia

 *  Module description: This is a Quicksort algorithm implementation.
    Quicksort is a sorting algorithm based on divide-and-conquer mostly used
    in real world because of your simplicty and performance with big arrays.
*/

#include "quicksort.h"

void swap (int32_t *x, int32_t *y)
{
    int32_t temp = *x;
    *x = *y;
    *y = temp;
}

static inline int32_t quick_part (int32_t unsorted_array[], int32_t low, int32_t high)
{
    int32_t pivot = unsorted_array[high];
    int32_t smaller = low - 1;

    for (int32_t k = low; k <= (high -1); k++) {
        if (unsorted_array[k] < pivot) {
            smaller++;
            swap (&unsorted_array[smaller], &unsorted_array[k]);
        }
    }
    swap (&unsorted_array[smaller + 1], &unsorted_array[high]);

    return smaller + 1;
}

void quicksort (int32_t unsorted_array[], int32_t low, int32_t high)
{
    int32_t part;
    if (low < high) {   

        part = quick_part (unsorted_array, low, high);
        quicksort (unsorted_array, low, part - 1);
        quicksort (unsorted_array, part + 1, high);
    }

}




