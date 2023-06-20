#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);

task 4
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z') 
{       
if (ch != 'e' && ch != 'q') 
{       
putchar(ch);
}       
ch++;   
}       
putchar('\n');
return (0);
}
