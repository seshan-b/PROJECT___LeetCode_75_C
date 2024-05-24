#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function declaration
char * mergeAlternately(char * word1, char * word2);

void run_test(const char *word1, const char *word2, const char *expected) {
    char *result = mergeAlternately(word1, word2); // Call the mergeAlternately function
    if (strcmp(result, expected) == 0) { // Check if the result matches the expected output
        printf("Test passed: %s + %s => %s\n", word1, word2, result); // Print success message if the test passed
    } else { // If the result does not match the expected output
        printf("Test failed: %s + %s => %s, expected %s\n", word1, word2, result, expected); // Print failure message
    }
    free(result); // Free the allocated memory for the result
}

int main() {
    // Test Case 1
    run_test("abc", "pqr", "apbqcr"); // Run test case 1

    // Test Case 2
    run_test("ab", "pqrs", "apbqrs"); // Run test case 2

    // Test Case 3
    run_test("abcd", "pq", "apbqcd"); // Run test case 3

    return 0; // Return 0 to indicate successful execution
}
