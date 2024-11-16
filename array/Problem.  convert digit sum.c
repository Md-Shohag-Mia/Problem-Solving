#include <stdio.h>

int main() {
    int scrabble_values[26] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
        1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10
    };

    char word[100];
    int score = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++) {

        char ch = toupper(word[i]);


        int index = ch - 'A';
        if (index >= 0 && index < 26) {
            score += scrabble_values[index];
        }
    }
    printf("Scrabble value: %d\n", score);

    return 0;
}

