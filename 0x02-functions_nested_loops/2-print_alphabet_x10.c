#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet 
 *
 */
void print_alphabet_x10(void)
{
	char letter;
	for(int i = 1 ; i <= 10 ; i++)
		for(letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar("\n");
}
