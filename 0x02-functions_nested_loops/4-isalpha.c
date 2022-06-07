#include "main.h"
/**
 * main - check the code
 * _isalpha - check if character is an alphabetic char.
 * @c: type int character
 * Return: 1 if letter, lower or uppercase, and 0 otherwise
 */
int _isalpha(int c)
{

	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);

}
