#include <iostream>
#include <string>
#include <memory>

class Solution {
public:
    std::string mergeAlternately(const std::string &word1, const std::string &word2) {
        // 1. Initialize an empty list 'merged'
        int len1 = word1.length();
        int len2 = word2.length();
        int maxLen = len1 + len2;

        // Allocate memory for the merged string
        std::string merged;
        merged.reserve(maxLen);

        // 2. Initialize pointer i and j to 0
        int i = 0, j = 0;

        // 3. While i < len(word1) and j < len(word2):
        while (i < len1 && j < len2) {
            // 3a. Add word1[i] to merged
            merged.push_back(word1[i++]);
            // 3c. Add word2[j] to merged
            merged.push_back(word2[j++]);
        }

        // 4. If there are remaining characters in word1 (i < len(word1)):
        while (i < len1) {
            // 4a. Append the remaining characters to merged
            merged.push_back(word1[i++]);
        }

        // 5. If there are remaining characters in word2 (j < len(word2)):
        while (j < len2) {
            // 5a. Append the remaining characters to merged
            merged.push_back(word2[j++]);
        }

        // 7. Return the joined string
        return merged;
    }
};
