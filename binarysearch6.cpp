





// BRUTEFORCE APPROACH
// #include <iostream>
// #include <vector>

// using namespace std;

// int search(vector <int> &arr){
// 	for(int i = 0 ; i<arr.size()-1;i++){
// 		if(i==0){
// 			if(arr[i]!= arr[i+1]){
// 				return arr[i];
// 			}
// 		}
// 		else if(i==arr.size()-2){
// 				if(arr[i] != arr[i-1]){
// 					return arr[i];
// 				}
// 		}
// 		else{
// 			if(arr[i] != arr[i+1] && arr[i] != arr[i-1]){
// 				return arr[i];
// 			}
// 		}
// 	}
// }

// int  main(){
// 	vector<int>arr = {1,1,2,2,3,3,69,5,5,6,6};
// 	int ans = search(arr);
// 	cout << "ans is " << ans << endl;
// 	return 0;
// };


// OPTIMIZED APPROACH


#include <iostream>
#include <vector>

using namespace std;


int search(vector <int>&arr){
	int l=0;
	int h = arr.size()-1;

	if(arr[l] !=arr[l+1]){
		return arr[l];
	}

	if(arr[h] != arr[h-1]){
		return arr[h];
	}

	while(l<=h){
		int mid = (l+h)/2;
		if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]){
			return arr[mid];
		}

	// eliminating left half
		if((arr[mid]%2 == 1 && arr[mid] == arr[mid+1]) || (arr[mid] %2 ==0 && arr[mid] == arr[mid-1])){
			l = mid+1;
		}
		else{
			h= mid - 1;
		}

	}

	return -1;


}


int main(){
	vector <int>arr = {1,1,2,2,3,3,24,5,5};
	int ans = search(arr);
	cout << "ans is "<< ans << endl;
	return 0;
}




