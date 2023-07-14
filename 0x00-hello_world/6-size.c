#include <stdio.h>

/**
 * main - A entry point
 *
 * Return 0 (Success)
 */

int main(void)
{
printf("Size of a char: %u byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %u byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %u byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %u bytes(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %u byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
