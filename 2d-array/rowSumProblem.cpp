#include <iostream>
using namespace std;






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



	return 0;
}