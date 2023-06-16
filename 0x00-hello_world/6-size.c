#include <stdio.h>
/**
*main - A program that prints  size of various types 
*Return: 0 (Success)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("size of a char: %lu byte(s)\n", (unsigned long)siszeof(a));
printf("size of an int: %lu byte(s)\n", (unsigned long)siszeof(b));
printf("size of a long int: %lu bytes(s)\n", (unsigned long)siszeof(c));
printf("size of a long long int: %lu bytes(s)\n", (unsigned long)siszeof(d));
printf("size of a float: %lu bytes(s)\n", (unsigned long)siszeof(f));
return (0);
}
