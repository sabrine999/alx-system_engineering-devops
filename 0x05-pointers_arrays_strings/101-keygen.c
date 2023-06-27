#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int sum = 0;
    char c;

    srand(time(NULL));
    while (sum <= 2645)
    {
        c = (rand() % 127) + 1; // Generate random character from 1 to 127 (excluding null byte)
        sum += c;
        putchar(c);
    }
    putchar(2772 - sum);
    return 0;
}
