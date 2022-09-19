#include <stdio.h>
#include "main.h"

/**
 * puts_half - A function that prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 1 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
