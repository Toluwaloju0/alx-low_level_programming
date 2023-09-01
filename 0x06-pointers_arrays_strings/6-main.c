#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Exp{ect the b}est. Prep,are for t.he worst. Capital\"ize on wh;at comes.\nhello world! hell?o-world 0123456h!ello w(orld\the)llo world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
