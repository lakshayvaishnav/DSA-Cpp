#include<iostream>
#include<utility>
using namespace std;


void reverseArray(int i , int n, int arr[] ){

	if (i >= n/2){
		return;
	}

	swap(arr[i],arr[n-i-1]);
	reverseArray(i+1,n,arr);
}


int main() {

	int n;
	cout << "enter size of array : " << endl;
	cin >> n;
	int arr[n];

	cout << "enter the elements of array : " << endl;
	for(int i=0;i<n;i++) cin >> arr[i]; // taking the values for array

	 reverseArray(0,n,arr);


	for(int i = 0 ; i < n; i++) cout << arr[i] << " " ;

	return 0;
}