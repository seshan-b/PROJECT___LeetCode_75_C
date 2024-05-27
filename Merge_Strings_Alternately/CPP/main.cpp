#include <iostream>
#include <string>
#include <memory>

// Define the Solution class
class Solution {
public:
    // Define the mergeAlternately method
    std::string mergeAlternately(const std::string &word1, const std::string &word2) {
        // 1. Initialize an empty string 'merged'
        int len1 = word1.length();  // Get the length of word1
        int len2 = word2.length();  // Get the length of word2
        int maxLen = len1 + len2;   // Calculate the maximum length of the merged string

        // Create a string to hold the merged result
        std::string merged;
        merged.reserve(maxLen);  // Reserve space for efficiency

        // 2. Initialize pointers i and j to 0
        int i = 0, j = 0;

        // 3. While i < len(word1) and j < len(word2):
        while (i < len1 && j < len2) {
            // 3a. Add word1[i] to merged
            merged.push_back(word1[i++]);  // Add character from word1 and increment i
            // 3c. Add word2[j] to merged
            merged.push_back(word2[j++]);  // Add character from word2 and increment j
        }

        // 4. If there are remaining characters in word1 (i < len(word1)):
        while (i < len1) {
            // 4a. Append the remaining characters to merged
            merged.push_back(word1[i++]);  // Add remaining characters from word1
        }

        // 5. If there are remaining characters in word2 (j < len(word2)):
        while (j < len2) {
            // 5a. Append the remaining characters to merged
            merged.push_back(word2[j++]);  // Add remaining characters from word2
        }

        // 6. The merged string is now ready
        // 7. Return the merged string
        return merged;  // Return the result
    }
};
