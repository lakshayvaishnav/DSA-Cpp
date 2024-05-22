#include <iostream>
using namespace std;




int main() {

// initialising an array...
	int arr[3][4];


	// taking input on array :-
	for(int row = 0; row<3; row++){
		for (int col = 0; col<4; col++){
			cin >> arr[row][col];
		}
	}

	// printing the array :-

	for(int row = 0 ; row < 3; row++){
		for(int col = 0 ; col < 4; col++){
			cout << arr[col][row] << " " ;
		}
		cout << endl;
	}


	return 0 ;
}