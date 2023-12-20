#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int temp;

    for (i = 0; i < size - 1; i++)
    {
        // Last i elements are already in place, so no need to check them
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                // Swap if the current element is greater than the next one
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                print_array(array, size);
            }
        }
    }
}