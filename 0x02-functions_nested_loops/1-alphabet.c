#include "main.h"
/**
 * main
 * print_alphabet - print alphabet in lowercase using '_putchar'
 * Return: 0.
 */
void print_alphabet(void)
{

	char c = 'a';


	while (c <= 'z')
	{

		_putchar(c);
		c++;
	}
	_putchar('\n');

}
