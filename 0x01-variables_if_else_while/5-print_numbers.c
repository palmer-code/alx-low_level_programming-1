#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: Prints all lowercase letters of the alphabet except 'e' and 'q'.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
