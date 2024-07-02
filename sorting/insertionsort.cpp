#include <iostream>
#include <vector>
using namespace std;



int main () {

	vector<int> arr = {1,4,66,78,23,4};
	int n = arr.size();

	for(int i = 1; i < n; i++){
		int temp = arr[i];
		int j=i-1;
		for(; j>= 0; j--){

			if(arr[j] > temp){
				// right shift
				arr[j+1] = arr[j];
			}

			else {
				// ruk jao kuch mat karo;
				break;
			}
		}

		arr[j+1] = temp;
	}

	// printing the loop.
	for(int i = 0; i < n; i++){
		std::cout << arr[i] << " ";
	}


	return 0;
}