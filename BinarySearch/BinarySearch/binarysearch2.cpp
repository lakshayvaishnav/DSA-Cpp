// Given a sorted array of distinct integers and a target value, 
// return the index if the target is found. If not, return the 
// index where it would be if it were inserted in order.


#include <vector>
#include <iostream>
using namespace std;


int searchInsert(vector<int>& arr,int target){
	int start = 0;
	int end = arr.size()-1;
	int x;
	while(start<=end){
		int mid = (start+end)/2;
		if(target < arr[mid]){
			end = mid-1;
			x = end+1;
		}
		else if (target> arr[mid]){
			start = mid+1;
			x = start;
		}
		else{
			return mid;
		}
	}
	return x;
}


int main(){
	vector <int> arr= {1,2,4,7,9,10};

	int ans = searchInsert(arr,12);

	cout << ans<<endl;

}