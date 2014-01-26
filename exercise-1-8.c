#include <stdio.h>

main()
{
    long character, counter;

    counter = 0;

    while ((character = getchar()) != EOF)
    {
        if (character == '\n')
            ++counter;
        if (character == '\t')
            ++counter;
        if (character == ' ')
            ++counter;
    }
    printf("%ld\n", counter);
}