#include "main.h"

/**
 * main - funtion that prints the alphabet x10
 * in lowercase and a new line
 * Return: 0 
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		char ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
