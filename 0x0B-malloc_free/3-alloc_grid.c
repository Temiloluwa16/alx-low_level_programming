#include "main.h"
/**
 * alloc_grid - is a function that creates 2d array
 * @width: is the width of the array
 * @height: is the weight of the array
 * Return: a pointer to the 2d array, or NULL if it it fails
 */
int **alloc_grid(int width, int height)
{
int i, j, k, l;
int **a;
if (width <= 0 || height <= 0)
return (NULL);
a = malloc(height * sizeof(int *));
if (a == NULL)
{
free(a);
return (NULL);
}
for (i = 0; i < height; i++)
{
a[i] == malloc(width * sizeof(int));
if (a[i] == NULL)
{
for (j = i; j >= 0; j--)
{
free(a[j]);
}
free(a);
return (NULL);
}
}
for (k = 0; k < height; k++)
{
for (l = 0; l < width; l++)
a[k][l] = 0;
}
return (a);
}
