#include "main.h"
#include <stdio.h>

/**
 * _revse array a function that reverses the content of an array of integers
 * @a: content
 * @n: elements of content
 * return: always 0 (succsus)
 *
 */
void reverse_array(int *a, int n)
{
int result[500];
int i;
n--;

for (i = 0; i <= n; i++)
result[i] = a[i];

for (i = 0; i <= n; i++)
a[i] = result[n - i];
}
