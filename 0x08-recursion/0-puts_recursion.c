#include "main.h"
/**
 * _puts_recursion - function to print string recursivly
 * @s: string parameter
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
