#include "sort.h"
/**
 * selection_sort - sorting an array using selection sort
 * @array: an array to sort
 * @size: size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, i2;
	int min;
	int temp;
	int x2;
	int *ptr;

	for (i = 0; i < size - 1; i++)
	{
		min = *(array + i);
		ptr = array + i;

		for (i2 = i + 1; i2 < size; i2++)
		{
			x2 = *(array + i2);
			if (min > x2)
			{
				min = x2;
				ptr = array + i2;
			}
		}

		if (ptr != (array + i))
		{
			temp = *(array + i);
			*(array + i) = min;
			*ptr = temp;
			print_array(array, size);
		}
	}
}
