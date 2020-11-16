#include <stdio.h>
#include "search.h"

int binary_search_recursive(int array[], int l_bound, int r_bound, int target)
{
    int m = l_bound + (r_bound - l_bound) / 2;
    if (l_bound > r_bound)
        return -1;
    else
    {
        if (array[m] == target)
            return m;
        else if (array[m] > target)
            return binary_search_recursive(array, l_bound, m - 1, target);
        else
            return binary_search_recursive(array, m + 1, r_bound, target);
    }
}

int binary_search_iterative(int array[], int low, int high, int target)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (array[mid] > target)
            high = mid - 1;
        else if (array[mid] < target)
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

int binary_search_iterative_insert(int array[], int l_bound, int r_bound, int target)
{
    int mid;
    while (l_bound <= r_bound)
    {
        mid = l_bound + (r_bound - l_bound) / 2;
        if (array[mid] > target)
            r_bound = mid - 1;
        else if (array[mid] < target)
            l_bound = mid + 1;
        else
            return mid;
    }
    return r_bound;
}

int binary_search_recursive_insert(int array[], int l_bound, int r_bound, int target)
{
    int m = l_bound + (r_bound - l_bound) / 2;
    if (l_bound > r_bound)
        return r_bound;
    else
    {
        if (array[m] > target)
            return binary_search_recursive_insert(array, l_bound, m - 1, target);
        else
            return binary_search_recursive_insert(array, m + 1, r_bound, target);
    }
}