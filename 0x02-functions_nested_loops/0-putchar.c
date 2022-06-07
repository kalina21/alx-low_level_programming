#include "putchar.h"
/**
 * main - print _putchar
 * Description: prints _putchar followed by newline
 * Return: 0.
 */
int main(void)
{

	char putchar[] = "_putchar";
	int i = 0;


	while (putchar[i] != '\0')
	{

		_putchar(putchar[i]);
		i++;
	}
	_putchar('\n');

	return (0);

}
