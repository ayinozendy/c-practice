#include <stdio.h>

main()
{
    int character;

    while ((character = getchar()) != EOF)
    {
        if (character != '\t' && character != '\b' && character != '\\')
            putchar(character);

        if (character == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        if (character == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        if (character == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
    }
}