#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: integer value
 *
 * Return: 1 if the input integer is a prime number, otherwise 0
 *
 * Author: Silas Mugambi
 */
int is_prime_number(int n)
{
    int i;

    if (n <= 1)
        return (0);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return (0);
    }
    return (1);
}

