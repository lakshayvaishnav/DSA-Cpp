#include <iostream>
#include <climits>
using namespace std;



void largestRowSum(int arr[][3], int row , int col) {
	int maxi = INT_MIN;
	int rowindex = -1;
		for(int row = 0; row<3; row++){
			int sum = 0;
		for (int col = 0; col<3; col++){
				sum += arr[row][col];
		}

		if(sum > maxi){
			maxi = sum;
			rowindex = row;
		}
	}
	cout << "the maximum sum is " << maxi << " at row " << rowindex+1  << endl;
}


int main () {
	int arr[3][3];

	
	// taking input 
		for(int row = 0; row<3; row++){
		for (int col = 0; col<3; col++){
			cin >> arr[row][col];
		}
	}

	// implementing row sum : -
		for(int row = 0; row<3; row++){
			int sum = 0;
		for (int col = 0; col<3; col++){
			sum+= arr[row][col];
		}
		cout << "sum = " << sum << endl;
	}

	cout << "give array is : - " << endl;
		for(int row = 0; row<3; row++){
		for (int col = 0; col<3; col++){
			cout << arr[row][col] << " ";
		}
		cout << endl;
	}

cout << "largest row sum function running : - " << endl;
	largestRowSum(arr,3,3);



	return 0;
}