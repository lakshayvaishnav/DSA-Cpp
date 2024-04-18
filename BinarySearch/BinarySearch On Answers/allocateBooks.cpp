#include <iostream>
#include <vector>
using namespace std;

	bool isPossible(vector <int> arr, int n , int m , int mid){
		cout << "is possible running " << endl;
		int pagesNum = 0;
		int sutdentCount = 1;
		for(int i = 0; i<n; i++){
			if(pagesNum + arr[i] <= mid){
				pagesNum+= arr[i];
			}
			else{
				sutdentCount++;
				if(sutdentCount > m || arr[i] > mid){
					return false;
				}
				pagesNum+= arr[i];
			}
		}
		return true;
	}


	// n is number of books. , m is number of students.
	int allocateBooks(vector <int> arr, int n , int m){
		cout << "allocateBooks running "<< endl;
		int start = 0;
		int sum = 0;
		int ans = 0;

		for (int i = 0; i<n;i++){
			sum += arr[i];
		}
		int end = sum;
		int mid = (start + end) / 2;

		while(start <= end){
			if(isPossible(arr, n ,  m ,  mid)){
				ans = mid;
				end = mid - 1;
			}
			else {
				start = mid + 1;
			}
			mid = (start + end) /  2;
		}

		return ans;
	}


int main(){
	vector <int> arr = {10,20,30,40};
	int ans = allocateBooks(arr,4,2);
	cout << "ans is : " << ans << endl;

}
