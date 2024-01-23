#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int findMin(vector<int>& arr){
int l = 0;
int h = arr.size()-1;
int ans = INT_MAX;
while(l<=h){
	int mid = (l+h)/2;

	// left is sorted
	if(arr[l]<=arr[mid]){
		ans = min(ans,arr[l]);
		l = mid+1;
	}
	else{
		h = mid - 1;
		ans = min(ans,arr[mid]);
	}
}
return ans;
}

int main(){

vector<int>arr = {3,4,5,1,2};
int ans = findMin(arr);
cout << "minimum element is " <<  ans << endl;

}