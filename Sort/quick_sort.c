# include <stdio.h>
# include "sort.h"

void quick_sort(int array[], int l_bound, int r_bound)
{
    int i = l_bound;
    int j = r_bound;
    int key = array[l_bound];
    if (l_bound >= r_bound)
    {
        return ;
    }
    while (l_bound < r_bound)
    {
        while (l_bound < r_bound && key <= array[r_bound])
        {
            --r_bound;
        }
        if (key > array[r_bound])
        {
            array[l_bound] = array[r_bound];
            ++l_bound;
        }
        while (l_bound < r_bound && key >= array[l_bound])
        {
            ++l_bound;
        }
        if (key < array[l_bound])
        {
            array[r_bound] = array[l_bound];
            --r_bound;
        }
    }
    array[l_bound] = key;
    quick_sort(array, i, l_bound-1);
    quick_sort(array, l_bound+1, j);
}