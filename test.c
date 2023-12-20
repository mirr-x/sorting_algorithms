#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *array, size_t size)
{
    size_t i, db = size;
    int big_num;
    int x1, x2;

    for (i = 0; i < size; i++)
    {
        if (db - 2 == 0)
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
        }
    }
}

int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    bubble_sort(array, n);
    printf("\n");
    return (0);
}