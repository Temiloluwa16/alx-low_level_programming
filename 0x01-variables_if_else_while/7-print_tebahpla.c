#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-> assign a random number to the variable n each time it executed
 * and prints out based a condition
 * Result: always 0
 */
int main(void)
{
char ch;

for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar(10);
return (0);
}
