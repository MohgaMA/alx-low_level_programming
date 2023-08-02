#include "main.h"
/**
 * prime - Checks if a number is divisible.
 * @n: The number to be checked.
 * @itr: The iterator.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */
int prime(int n, int itr)
{
	if (itr >= n && n > 1)
		return (1);
	if (n % itr == 0 || n <= 1)
		return (0);
	return(prime(n, itr + 1));
}
/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
