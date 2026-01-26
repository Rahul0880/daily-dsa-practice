#include<bits/stdc++.h>
using namespace std;
//Brute force approach with O(n^2) time complexity and O(1) space complexity

vector<int> twoSumBruteForce(vector<int>& nums, int target) {
    int n = nums.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
}

int main() {
    vector<int> nums = {2, 11, 7, 15, 3, 6}; // 3,6 sum to 9 but their indices are 4 and 5, they are not adjacent 
    int target = 9;
    vector<int> result = twoSumBruteForce(nums, target);
    if(!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl; // this represents 
    } else {
        cout << "No two sum solution found." << endl;
    }
    return 0;
}


//Optimized approach with O(n) time complexity and O(1) space complexity
/*vector<int> twoSumOptimized(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    while(left < right) {
        int currentSum = nums[left] + nums[right];
        if(currentSum == target) {
            return {left, right};
        } else if(currentSum < target) {
            left++;
        } else {
            right--;
        }
    }
    return {};
}*/