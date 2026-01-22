//Remove duplicates from Unsorted array using two pointer approach
#include <bits/stdc++.h>
using namespace std;

int removeDuplicatesUnsorted(vector<int>& nums) {
    unordered_set<int> seen; // To keep track of seen elements
    int writeIndex = 0; // Index to write the next unique element

    for(int readIndex = 0; readIndex < nums.size(); readIndex++) {
        if(seen.find(nums[readIndex]) == seen.end()) {
            seen.insert(nums[readIndex]);
            nums[writeIndex] = nums[readIndex];
            writeIndex++;
        }
    }
    return writeIndex; // New length of the array with unique elements
}