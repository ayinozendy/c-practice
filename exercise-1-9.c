#include <stdio.h>

main()
{
    int character;

    while ((character = getchar()) != EOF)
    {
        if (character == ' ')
        {
            putchar(' ');
            while ((character = getchar()) == ' ')
                /* do nothing */;
        }

        if (character != EOF)
            putchar(character);
    }
}