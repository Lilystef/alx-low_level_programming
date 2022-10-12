/*
 * A function that executes a function given as a parameter on each element of
 * an array
 */
#include <stddef.h>
#include "function_pointers.h"

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

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
