#include <iostream>
#include <vector>
using namespace std;


int main() {

	vector<int> arr = {3,56,68,23,4,0,9};
	int n = arr.size();

	// logic for selection sort

	for(int i = 0; i < n - 1; i++){
		int minIndex = i;
		for(int j = i+1; j< n ; j++ ){
			if(arr[j] < arr[minIndex])
				minIndex = j;

		}

		swap(arr[minIndex], arr[i]);
	}

	// print the sorted array.
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}