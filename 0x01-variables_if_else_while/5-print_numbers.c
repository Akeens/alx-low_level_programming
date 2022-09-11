#include <stdio.h>

/**
 * main - prints the digit number in base 10,
 * starting from 0, followed by a new line
 * Return: Aways 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
