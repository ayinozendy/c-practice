#include <stdio.h>

main()
{
    long character, counter;

    counter = 0;

    while ((character = getchar()) != EOF)
        if (character == '\n' || character == '\t' || character == ' ')
            ++counter;
    printf("%ld\n", counter);
}