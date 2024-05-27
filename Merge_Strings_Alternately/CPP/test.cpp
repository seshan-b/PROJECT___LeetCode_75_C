#include <iostream>
#include <string>

class Solution {
public:
    std::string mergeAlternately(const std::string &word1, const std::string &word2);
};

void run_test(const std::string &word1, const std::string &word2, const std::string &expected) {
    // Create an instance of Solution
    Solution solution;
    
    // Call the mergeAlternately function
    std::string result = solution.mergeAlternately(word1, word2);
    
    // Check if the result matches the expected output
    if (result == expected) {
        std::cout << "Test passed: " << word1 << " + " << word2 << " => " << result << std::endl;
    } else {
        std::cout << "Test failed: " << word1 << " + " << word2 << " => " << result << ", expected " << expected << std::endl;
    }
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

std::string Solution::mergeAlternately(const std::string &word1, const std::string &word2) {
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
