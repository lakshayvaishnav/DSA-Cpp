// search in rotated sorted array - 2

/* There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).

Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) 
such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 
For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].

Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.

You must decrease the overall operation steps as much as possible.

 

Example 1:

Input: nums = [2,5,6,0,0,1,2], target = 0
Output: true
Example 2:

Input: nums = [2,5,6,0,0,1,2], target = 3
Output: false

*/

#include <vector>
#include <iostream>
using namespace std;


bool search(vector <int> &arr,int target){
	int low = 0;
	int high = arr.size()-1;

// implementing binary search
	while(low<=high){
		int mid = (low + high) / 2;

		if(arr[mid] == target) return true;
		if(arr[mid] == arr[low] && arr[mid] == arr[high]){
				low = low + 1;
				high = high - 1;
				continue;
		}

		// left sorted
		if(arr[low] <= arr[mid]){
			if(arr[low]<=target && target<=arr[mid]){
					high = mid - 1;
			}
			else {
				low = mid + 1;
			}
		}

		else{
			if(arr[high] >= target && target >= arr[mid]){
				low = mid + 1;
			}
			else {
				high = mid -1;
			}
		}
	}
	return false;
}


int main(){
	vector <int> arr = {2,5,6,0,0,1,2};
	int target = 0;
	int ans = search(arr,target);
	cout << "ans is " << ans << endl;

}