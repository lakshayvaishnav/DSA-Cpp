// search in rotated sorted array


#include <vector>
#include <iostream>
using namespace std;

int search(vector<int> &arr , int target){
	int low = 0;
	int high = arr.size()-1;

	while(low<=high){
		int mid = (low + high) /2;
		// found in the middle;
		if(arr[mid]==target) return mid;

		// left sorted
		if(arr[low] <= arr[mid]){
			// left side
			if(arr[low]<=target && target <=arr[mid]){
				high = mid -1;
			}
			else {
				low = mid + 1;
			}
		}
		// right sorted
		else {
			if(arr[high] >= target && target >= arr[mid]){
				// right side
				low = mid + 1;
			}
			else{
				high = mid -1;
			}
		}
	}
	return -1;

}


int main (){
	vector <int> arr = {4,5,6,7,0,1,2};
	int target = 0;
	int ans = search(arr,target);
	cout << "ans is " << ans << endl;

}