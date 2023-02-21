#include "main.h"

/**
 * main - Entry point
 * Description: This program prints 'Main \n' to the console
 * Return: Always 0 (success)
 */

int main(void)
{
	char str[] = "Main\n";
	int i = 0;

	while (str[i] != '\0')
	{
		char c = str[i];

		_putchar(c);
		i++;
	}
	_putchar('\n'); // Add a newline character after the string is printed
	return (0);
}
