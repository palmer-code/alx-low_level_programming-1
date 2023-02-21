#include "main.h"

/**
 * main - Entry point
 * Description: This program prints 'Holberton \n' to the console
 * Return: Always 0 (success)
 */

int main(void)
{
	char str[] = "Holberton\n";
	int i = 0;

	while (str[i] != '\0')
	{
		char c = str[i];

		_putchar(c);
		i++;
	}
	return (0);
}
