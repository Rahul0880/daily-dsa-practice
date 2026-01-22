//Remove duplicates from Unsorted array using two pointer approach
#include <bits/stdc++.h>
using namespace std;

int removeDuplicatesUnsorted(vector<int> &nums) {
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
int main() {
    vector<int> nums = {4, 2, 4, 5, 2, 3, 1, 5}; // Example unsorted array with duplicates
    int newLength = removeDuplicatesUnsorted(nums);
    cout << "New length: " << newLength << endl;
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}

//This is optimized approach with O(n) time complexity and O(n) space complexity
//Brute force approach with O(n^2) time complexity and O(1) space complexity
/*int removeDuplicatesUnsortedBruteForce(vector<int>& nums) {
    int n = nums.size();
    if(n == 0) return 0;
    int writeIndex = 0; // Index to write the next unique element
    for(int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for(int j = 0; j < writeIndex; j++) {
            if(nums[i] == nums[j]) {
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate) {
            nums[writeIndex] = nums[i];
            writeIndex++;
        }
    }
    return writeIndex; // New length of the array with unique elements
}*/