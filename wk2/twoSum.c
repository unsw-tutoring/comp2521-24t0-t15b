#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Given an array of integers, return true if there exists two numbers in the array such that their sum is equal to the target.

// O(n^2)
bool twoSum(int *arr, int size, int target) {
    for (int i = 0; i < size; i++) { // n times
        for (int j = i + 1; j < size; j++) { // O(n) times
            if (arr[i] + arr[j] == target) { // O(1)
                return true;
            }
        }
    }

    return false;
}

// 1,2,3,4,5
// target: 10