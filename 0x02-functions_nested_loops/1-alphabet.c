#include "main.h"

/**
 * main - funtion that prints the alphabet
 * in lowercase and a new line
 * Return: 0
 */
void print_alphabet(void)
{
	char ch = 'a';
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
