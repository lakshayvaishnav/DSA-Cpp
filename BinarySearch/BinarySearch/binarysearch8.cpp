/*
162. Find Peak Element
Solved
Medium
Topics
Companies
A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array nums, find a peak element, and return its index.
 If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞. In other words, 
an element is always considered to be strictly greater than a neighbor that is outside the array.

You must write an algorithm that runs in O(log n) time.

Example 1:

Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.
*/

#include <iostream>
#include <vector>
using namespace std;

int findPeak(vector<int>& arr){
	int n = arr.size();
	if(n==1){
		return 0;
	}
	if(arr[0]>arr[1]) return 0;
	if(arr[n-1]>arr[n-2]) return n-1;

	int l = 1;
	int h = n-2;

	while(l<=h){
		int mid = (l+h)/2;
		if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
			return mid;
		}
		// increasing slope
		else if (arr[mid] > arr[mid-1] && arr[mid] < arr[mid+1]){
			l = mid+1;
		}
		// decreasing slope
		else if (arr[mid] > arr[mid-1] && arr[mid] < arr[mid-1]){
			h = mid - 1;
		}
		// valley element
		else{
			l = mid+1;
		}
	}
	return -1;
}

int main(){

	vector<int> arr = {1,2,1,3,5,6,4};
	int ans = findPeak(arr);

	std::cout << "ans is " << ans << std::endl; 

return -1;
}