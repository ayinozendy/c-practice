#include <stdio.h>

#define IN  1
#define OUT 0

main()
{
    int character;

    while ((character = getchar()) != EOF) {
        if (character == ' ' || character == '\t' || character == '\n') {
            putchar('\n');
            while ((character = getchar()) == ' ' || character == '\t' || character == '\n')
                ; /* do nothing */
        }

        if (character != EOF)
            putchar(character);
    }
}