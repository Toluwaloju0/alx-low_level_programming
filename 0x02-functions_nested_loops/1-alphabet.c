#include <stdio.h>

int _putchar(char c);

void print_alphabet(void)
{
    char ch;
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        _putchar(ch);
    }
    _putchar('\n');
}

int _putchar(char c)
{
    return putchar(c);
}

int main(void)
{
    print_alphabet();
    return 0;
}
