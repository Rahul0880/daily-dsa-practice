//Remove duplicates from sorted array
#include <bits/stdc++.h>
using namespace std;

//vector<int> removeDuplicatesBruteForce(vector<int>& nums)
//vector<int> to return multiple values if needed(indices/pair of values)
//int removeDuplicatesBruteForce(vector<int>& nums) 
//int fun name to return single value
int removeDuplicates(vector<int>& nums) {
    if(nums.empty()) return 0;
    int writeIndex = 0; // Index to write the next unique element
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != nums[i + 1]) {
            nums[writeIndex] = nums[i];
            writeIndex++;
        }
    }
    return writeIndex; // New length of the array with unique elements
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5}; // Example sorted array with duplicates
    int newLength = removeDuplicates(nums);
    cout << "New length: " << newLength << endl;
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
//This is optimized approach with O(n) time complexity and O(1) space complexity

//Brute force approach with O(n^2) time complexity and O(1) space complexity
/*int removeDuplicatesBruteForce(vector<int>& nums) {
    int n = nums.size();
    if(n == 0) return 0;
    int writeIndex = 1; // Index to write the next unique element
    for(int i = 1; i < n; i++) {
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
