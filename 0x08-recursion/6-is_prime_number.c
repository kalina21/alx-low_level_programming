#include "main.h"
/**
 * prime - checks whether the input is a prime number or not
 * @n: input integer
 * @c: iterator
 * Return: 1 if n is a prime number 0 otherwise
 */

int prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{


		if (n == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + prime(n, c + 1));
}
/**
 * is_prime_number - checks whether the input is a prime number or not
 * @n: input integer
 * Return: 1 if n is a prime number 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}

	else if (n < 0)
	{
		return (0);
	}

	else if (n == 1)
	{
		return (0);
	}
	else
	{
		return (prime(n, 2));
	}
}
