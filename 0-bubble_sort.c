#include <stdio.h>
#include "sort.h"
/**
 * bubble_sort - function to sort an array
 * @array: an of integers to be sorted
 * @size: the size of the array
 * Return: Nothing (void)
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t last = size - 1;
	int tmp = 0;
	size_t j = 0;

	if (!array || !size)
		return;

	for (; i < size; i++)
	{
		while (j < last)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
			j++;
		}
	}
}
