#include "main.h"
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: if no natural square root, return -1. else return natural
 * square root
 */
int _sqrt_recursion(int n)
{
return (halp(n, 1));
}
/**
 * halp - helper function to solve _sqrt_recusion
 * @c: number to determine is square root
 * @i: incrementer to compare against `c`
 * Return: square root if natural square root, or -1 if none found
 */
int halp(int c, int i)
{
int square;
square = i * i;
if (square == c)
return (i);
else if (squre < c)
return (halp(c, i + 1));
else
return (-1);
}

