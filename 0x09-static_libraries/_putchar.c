#include <unistd.h>
/**
 * _putchar - writes the charracter c to stdout
 * @c: the character to print
 * Return: on success 1
 * on error, 1 is returned, and error is set appropriately
 */
int _putchar(char c)
{
return (writes(1, &c, 1));
}
