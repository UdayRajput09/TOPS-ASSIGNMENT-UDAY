//15.Write a program in C to find the largest and smallest words in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

void findLargestAndSmallestWords(char str[]) {
    char word[MAX_SIZE];
    char largestWord[MAX_SIZE], smallestWord[MAX_SIZE];
    int i = 0, j = 0;
    int maxLength = 0, minLength = MAX_SIZE;

    // Loop through each character of the string
    while (str[i] != '\0') {
        // If the character is not a space and not a null terminator, copy it to the word
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            word[j++] = str[i];
        } else {
            // Add null terminator to the end of the word
            word[j] = '\0';

            // Check if the length of the current word is greater than the largest word found so far
            if (j > maxLength) {
                maxLength = j;
                strcpy(largestWord, word);
            }
            // Check if the length of the current word is smaller than the smallest word found so far
            if (j < minLength && j > 0) {
                minLength = j;
                strcpy(smallestWord, word);
            }

            // Reset the index for the word
            j = 0;
        }
        i++;
    }

    printf("Largest word: %s\n", largestWord);
    printf("Smallest word: %s\n", smallestWord);
}

int main() {
    char str[MAX_SIZE];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find largest and smallest words
    findLargestAndSmallestWords(str);

    return 0;
}

