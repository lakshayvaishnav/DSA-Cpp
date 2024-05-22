#include <iostream>
using namespace std;





int main () {

	int arr[3][4];

	// take input from user
		for(int row = 0; row<3; row++){
		for (int col = 0; col<4; col++){
			cin >> arr[row][col];
		}
	}


cout << "linear search running : - " << endl;
	// implementing linear search
	int target = 5;
	for(int row = 0; row < 3; row++){
		for(int col = 0;col < 4; col++){
			if(target == arr[row][col]){
				cout << "element found at row " << row+1 << " and column " << col+1 << endl;
			}
		}
	}

	// print the array : - 
	cout << "printing the array : -  " << endl;
	cout << endl;
		for(int row = 0; row<3; row++){
		for (int col = 0; col<4; col++){
			cout <<  arr[row][col] << " ";
		}
		cout << endl;
	}


	return 0;
}