#include <stddef.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: the array to iterate through
 * @size: the size of the array
 * @action: a pointer to a function that takes an int and returns void
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
