#include "main.h"
/**
 * print_alphabet_x10 , to the stdout
 * Return: void
 */

void print_alphabet_x10()
{
	int i;

	for(i = 0; i < 9; i++)
	{
		print_alphabet();
         	_putchar('\n');
	}
}
