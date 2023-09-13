#include "main.h"
/**
 * main-Entry point
 *
 * Description : prints _putchar using putchar prototype
 *
 * return : Always 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";
	int char;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');
	return (0);
}

