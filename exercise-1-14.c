#include <stdio.h>

/* List of considered characters */
/*
0,1..9
A..Z
a..z
*/

#define DIGITS 10
#define LETTERS 26

main()
{
    int current_character;
    int count_capital_letters[LETTERS];
    int count_small_letters[LETTERS];
    int count_digits[DIGITS];
    int highest_frequency;

    int i;

    highest_frequency = 0;


    for (i = 0; i < LETTERS; ++i)
        count_small_letters[i] = count_capital_letters[i] = 0;
    for (i = 0; i < DIGITS; ++i)
        count_digits[i] = 0;

    while ((current_character = getchar()) != EOF) {
        if ( current_character >= '0' && current_character <= '9') {
            ++count_digits[current_character-'0']; 
            if (count_digits[current_character-'0'] > highest_frequency)
                highest_frequency = count_digits[current_character-'0'];
        }
        if ( current_character >= 'A' && current_character <= 'Z') {
            ++count_capital_letters[current_character-'A'];
            if (count_capital_letters[current_character-'A'] > highest_frequency)
                highest_frequency = count_capital_letters[current_character-'A'];
        }
        if ( current_character >= 'a' && current_character <= 'z') {
            ++count_small_letters[current_character-'a'];
            if (count_small_letters[current_character-'a'] > highest_frequency)
                highest_frequency = count_small_letters[current_character-'a'];
        }
    }

    int j;
    
    for (j = highest_frequency; j >= 0; --j) {
        if (j > 0)
            printf("%3d ", j);
        else
            printf("  + ");
        for (i = 0; i < DIGITS; ++i) {
            if (count_digits[i] >= j && j != 0)
                printf(" # ");
            else if (j == 0) {
                printf(" %c ", i+'0');
            }
            else
                printf("   ");
        }

        
        for (i = 0; i < LETTERS; ++i) {
            if (count_capital_letters[i] >= j && j != 0)
                printf(" # ");
            else if (j == 0)
                printf(" %c ", i+'A');
            else
                printf("   ");

            if (count_small_letters[i] >= j && j != 0)
                printf(" # ");
            else if (j == 0)
                printf(" %c ", i+'a');
            else
                printf("   ");
        }
        
        putchar('\n');
    }
}