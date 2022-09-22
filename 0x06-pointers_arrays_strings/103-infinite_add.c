#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 *
 * Return: address of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
<<<<<<< HEAD
int i, j, k, l, m, n;
for (i = 0; n1[i]; i++)
;
for (j = 0; n2[j]; j++)
;
if (i > size_r || j > size_r)
return (0);
m = 0;
for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
{
n = m;
if (i >= 0)
n += n1[i] - '0';
if (j >= 0)
n += n2[j] - '0';
if (i < 0 && j < 0 && n == 0)
{
break;
}
m = n / 10;
r[k] = n % 10 + '0';
}
r[k] = '\0';
if (i >= 0 || j >= 0 || m)
return (0);
for (k -= 1, l = 0; l < k; k--, l++)
{
m = r[k];
r[k] = r[l];
r[l] = m;
}
return (r);
}
=======

	int index, n1_len = 0, n2_len = 0;

	for (index = 0; *(n1 + index); index++)
		n1_len++;
	for (index = 0; *(n2 + index); index++)
		n2_len++;
	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
>>>>>>> 574218c632f78712de7123f917cfa2006b880a4a
