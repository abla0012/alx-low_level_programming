#include "main.h"
/**
 * print_alphabet_x10 , to the stdout
 * Return: void
 */

void print_alphabet_x10()
{
	int i;
	char c;

	for(i = 0; i < 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
