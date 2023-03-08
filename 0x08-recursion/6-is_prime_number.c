#include "main.h"

int check_prime(int n, int i);

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
    return (check_prime(n, 2));
}

/**
 * check_prime - recursively checks if a number is prime
 * @n: integer value
 * @i: integer value
 *
 * Return: 1 if the input integer is a prime number, otherwise 0
 *
 * Author: Silas Mugambi
 */
int check_prime(int n, int i)
{
    if (n <= 1)
        return (0);
    if (i == n)
        return (1);
    if (n % i == 0)
        return (0);
    return (check_prime(n, i + 1));
}

