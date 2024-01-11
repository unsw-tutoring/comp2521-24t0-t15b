#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// Given a string, return true if the string is a palindrome.
// let n = length of string
bool isPalindrome(char *str) {
    // strlen takes O(n)
    int len = strlen(str); // O(n)
    
    for (int i = 0; i < len / 2; i++) { // O(n) times
        if (str[i] != str[len - i - 1]) { // O(1)
            return false;
        }
    }
    return true;
}
