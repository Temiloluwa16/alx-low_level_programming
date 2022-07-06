#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-> assign a random number to the variable n each time
 * it is executed and prints out based a condition
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar(10); 
	return (0);
}
