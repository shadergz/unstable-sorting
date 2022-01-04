/*
 *  Source code written by Gabriel Correia
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

#include "quicksort.h"

#define ARRAY_SIZE 1024

int main (int argc, char **argv)
{
    int *array = NULL; 
    
    assert ((array = calloc (ARRAY_SIZE, sizeof (int))));

    srand (time (NULL));

    for (int k = 0; k < ARRAY_SIZE; k++)
        array[k] = rand () % 1000;

    puts ("Before Quicksort: ");
    for (int k = 0; k < ARRAY_SIZE; k++)
        printf ("%3d ", array[k]);
    puts ("");
    
    quicksort (array, 0, ARRAY_SIZE - 1);
    puts ("After Quicksort: ");
    for (int k = 0; k < ARRAY_SIZE; k++)
        printf ("%3d ", array[k]);
    puts ("");

    free (array);

}
