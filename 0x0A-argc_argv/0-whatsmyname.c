#include <stdio.h>
/**
 * main - print the name of the file followed by a new line
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 0
 */


int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
