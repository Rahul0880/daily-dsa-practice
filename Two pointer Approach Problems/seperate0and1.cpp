//Separate 0 and 1 in an array
#include <bits/stdc++.h>
using namespace std;

//This approach is Optimal with O(n) time complexity and O(1) space complexity
//This approch is : Single pass using two pointers
void segregate0and1(vector<int> &arr) {
        int left = 0; // Points to the next position to place a 0
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            // When we find a 0, we swap it with the element at the 'left' pointer
            if (arr[i] == 0) {
                // Swap arr[i] and arr[left]
                int temp = arr[i];
                arr[i] = arr[left];
                arr[left] = temp;
                
                // Move the left pointer forward
                left++;
            }
        }
    }

int main(){
    vector<int> nums = {0, 1, 1, 0, 1, 0, 0, 1}; // Example array with 0s and 1s
    segregate0and1(nums);
    cout << "Array after separating 0s and 1s: ";
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
//Brute force approach with O(n^2) time complexity and O(1) space complexity
//This approach is : Sorting the array using bubble sort logic
/*void segregate0and1BruteForce(vector<int> &arr) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}*/
