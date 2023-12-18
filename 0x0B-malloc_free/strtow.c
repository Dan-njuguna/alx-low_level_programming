#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_words(char *str) {
    int count = 0;
    int word_started = 0;

    // Iterate over each character in the string
    while (*str != '\0') {
        // If the character is not a space and word has not started, increment the word count
        if (*str != ' ' && !word_started) {
            count++;
            word_started = 1;
        }
        // If the character is a space, set word_started to 0
        else if (*str == ' ') {
            word_started = 0;
        }

        str++; // Move to the next character
    }

    return count;
}

char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    // Count the number of words in the string
    int word_count = count_words(str);

    // Allocate memory for the array of strings
    char **words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL; // Memory allocation failed
    }

    int word_index = 0;
    char *token = strtok(str, " ");

    // Tokenize the string and store each word in the array
    while (token != NULL) {
        words[word_index] = token;
        word_index++;

        token = strtok(NULL, " ");
    }

    words[word_index] = NULL; // Set the last element of the array to NULL

    return words;
}

int main() {
    char str[] = "This is a sample string";
    char **words = strtow(str);

    if (words != NULL) {
        // Print the words
        for (int i = 0; words[i] != NULL; i++) {
            printf("%s\n", words[i]);
        }

        // Free the memory allocated for the array of strings
        free(words);
    }

    return 0;
}

