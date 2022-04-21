#include "main.h"
/**
 * _revse array a function that reverses the content of an array of integers
 * @a: content
 * @n: elements of content
 * return: always 0 (succsus)
 */
void reverse_array(int *a, int n)
{
int i, temp;

for (i = 0; i < n; i++)
{
n--;
temp = a[i];
a[i] = a[n];
a[n] = temp;
}
}
