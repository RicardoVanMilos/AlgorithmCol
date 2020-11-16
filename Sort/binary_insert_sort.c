#include <stdio.h>
#include "sort.h"
#include "../Search/search.h"

void binary_insert_sort_iterative(int array[], int l_bound, int r_bound)
{
    int i, j, x, m;
    int length = r_bound, start = l_bound;
    for (i = start; i < length; i++)
    {
        x = array[i];
        l_bound = 0;
        r_bound = i - 1;
        for (j = i - 1; j > binary_search_iterative_insert(array, l_bound, r_bound, x); j--)
        {
            array[j + 1] = array[j];
        }
        array[j + 1] = x;
    }
}

void binary_insert_sort_recursive(int array[], int l_bound, int r_bound)
{
    int i, j, x, m;
    int length = r_bound, start = l_bound;
    for (i = start; i < length; i++)
    {
        x = array[i];
        l_bound = 0;
        r_bound = i - 1;
        for (j = i - 1; j > binary_search_recursive_insert(array, l_bound, r_bound, x); j--)
        {
            array[j + 1] = array[j];
        }
        array[j + 1] = x;
    }
}