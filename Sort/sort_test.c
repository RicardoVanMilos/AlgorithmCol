#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "sort.h"

void printArray(int *, int);
void createArray(int *, int);

int main(void)
{
    int i;
    int a[21];
    
    createArray(a, 21);
    printf("The Original Array:\n");
    printArray(a, 21);
    printf("The Answer Quick Sort:\n");
    quick_sort(a, 0, 20);
    printArray(a, 21);
    printf("\n");

    createArray(a, 21);
    printf("The Original Array:\n");
    printArray(a, 21);
    printf("The Answer Binary Insert Sort Iterative:\n");
    binary_insert_sort_iterative(a, 0, 21);
    printArray(a, 21);
    printf("\n");

    createArray(a, 21);
    printf("The Original Array:\n");
    printArray(a, 21);
    printf("The Answer Binary Insert Sort Recursive:\n");
    binary_insert_sort_recursive(a, 0, 21);
    printArray(a, 21);
    printf("\n");

    return 0;
}

void printArray(int *array, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void createArray(int *array, int length)
{
    srand((unsigned)time(NULL));
    for (int i = 0; i < length; i++)
    {
        array[i] = rand() % 1000;
    }
}