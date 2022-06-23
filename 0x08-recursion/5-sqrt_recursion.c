#include "main.h"
/**
 * _sqrt_recursion - return the natural square root of a number
 * @i: input integer
 * @j: counter
 * Return: square root
 */



int sqroot(int i, int j)
{
	if (j % (i / j) == 0)
	{
		if (j * (i / j) == i)
		{
			return (j);
		}

		else
		{
			return (-1);
		}
	}



	return (0 + sqroot(i, j + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input integer
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}



	else if (n == 0)
	{
		return (0);
	}


	else if (n == 1)
	{
		return (1);
	}

	else
	{
		return (sqroot(n, 2));
	}

}
