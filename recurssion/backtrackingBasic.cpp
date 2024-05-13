#include <iostream>
using namespace std;


void backtracking(int i,int n){

	if(i<1){
		return ;
	}

	backtracking(i-1,n);
	cout << "the current value is : " << i << endl;

}

void backtrackingReverse(int i , int n){
	if (i < 1){
		return ;
	}

	cout << " the value is : " << i << endl;

	backtrackingReverse(i-1, n);
}


int  main() {
	int n = 10;
	backtrackingReverse(n,n);	
	return 0;
}