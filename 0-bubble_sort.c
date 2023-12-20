#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    size_t i, db = size;
    int x1, x2;

    for (i = 0; i < size; i++)
    {
        if (db - 1 == 0)
        {
            break;
        }
        else if (db - 1 == i)
        {
            db--;
            i = -1;
            continue;
        }

        x1 = array[i];
        x2 = array[i + 1];

        if (x1 > x2)
        {
            *(array + i) = x2;
            *(array + i + 1) = x1;
            print_array(array, size);
        }
    }
}