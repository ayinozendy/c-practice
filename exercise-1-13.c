#include <stdio.h>

#define MAX_WORD_LENGTH 46

main()
{
    int current_character;
    int current_word_char_count;
    int character_counts[MAX_WORD_LENGTH];
    int highest_char_count;

    highest_char_count = current_word_char_count = 0;

    int i;
    for (i = 0; i < MAX_WORD_LENGTH; ++i)
        character_counts[i] = 0;

    while ((current_character = getchar()) != EOF) {
        if (current_character != ' ' && current_character != '\t' && current_character != '\n' && current_character != ',' && current_character != '.') {
            current_word_char_count = 1;

            while ((current_character = getchar()) != ' ' && current_character != '\t' && current_character != '\n' && current_character != ',' && current_character != '.')
                ++current_word_char_count;

            if (current_word_char_count >= MAX_WORD_LENGTH)
                current_word_char_count = MAX_WORD_LENGTH - 1;

            ++character_counts[current_word_char_count];

            if (character_counts[current_word_char_count] > highest_char_count) {
                highest_char_count = character_counts[current_word_char_count];
            }
        }
    }

    int j, k;

    for (k = highest_char_count; k >= 0; --k) {
        if (k > 0)
            printf("%2d ", k);
        else
            printf(" + ");

        for (j = 0; j < MAX_WORD_LENGTH; ++j)
            if (character_counts[j] > 0 && k > 0) {
                if (character_counts[j] >= k)
                    printf(" X ");
                else
                    printf("   ");
            }
            else if (character_counts[j] > 0 && k == 0)
                printf("%2d ", j);
                
        putchar('\n');
    }
}