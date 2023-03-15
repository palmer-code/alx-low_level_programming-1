#include "main.h"
#include <stdlib.h>

 /**
 * Creates an array of chars and initializes it with a specific char.
 * @param size The size of the array to be initialized, in bytes.
 * @param c The specific char to initialize the array with.
 * @return A pointer to the array of size 'size', initialized with the character 'c'.
 * Returns NULL if 'size' is 0 or if the allocation fails.
 *
 * Silas Mugambi
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
