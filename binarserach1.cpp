// Given an array of integers nums which is sorted in ascending order, and an integer target, 
// write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

// You must write an algorithm with O(log n) runtime complexity.

#include <vector>
using namespace std;

class Solution {
public:
    // Recursive Approach 
    int bs(int i, int j, int n, int target, vector<int> &nums){
        // ... (unchanged)
    }

    int search(vector<int> &nums, int target){
        int n=nums.size();
        int result=bs(0,n-1,n,target,nums);   
        return result;
    }
};

int main() {
    // Your code using the Solution class goes here
    return 0;
}
