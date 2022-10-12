#include <stdio.h>

/**
 * array_iterator - executes the function given to @array on each @size element
 * @array: an array of integers
 * #size: the size of the array
 * @action: the function pointer
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
