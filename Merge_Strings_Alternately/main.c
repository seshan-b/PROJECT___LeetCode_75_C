#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * mergeAlternately(char * word1, char * word2) {
    // 1. Initialize an empty list 'merged'
    int len1 = strlen(word1); // Get the length of word1
    int len2 = strlen(word2); // Get the length of word2
    int maxLen = len1 + len2; // Calculate the maximum possible length of the merged string

    // Allocate memory for the merged string
    char *merged = (char *)malloc((maxLen + 1) * sizeof(char)); // +1 for the null terminator
    if (merged == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed\n");
        exit(1); // Exit the program if memory allocation failed
    }

    // 2. Initialize pointer i and j to 0
    int i = 0, j = 0, k = 0; // Initialize pointers for word1, word2, and merged

    // 3. While i < len(word1) and j < len(word2):
    while (i < len1 && j < len2) { // Loop until we reach the end of either word1 or word2
        // 3a. Add word1[i] to merged
        merged[k++] = word1[i++]; // Add the character from word1 and increment the pointers
        // 3c. Add word2[j] to merged
        merged[k++] = word2[j++]; // Add the character from word2 and increment the pointers
    }

    // 4. If there are remaining characters in word1 (i < len(word1)):
    while (i < len1) { // Loop if there are remaining characters in word1
        // 4a. Append the remaining characters to merged
        merged[k++] = word1[i++]; // Append the remaining characters from word1
    }

    // 5. If there are remaining characters in word2 (j < len(word2)):
    while (j < len2) { // Loop if there are remaining characters in word2
        // 5a. Append the remaining characters to merged
        merged[k++] = word2[j++]; // Append the remaining characters from word2
    }

    // 6. Join the merged list into a string
    merged[k] = '\0'; // Null-terminate the merged string

    // 7. Return the joined string
    return merged; // Return the merged string
}
