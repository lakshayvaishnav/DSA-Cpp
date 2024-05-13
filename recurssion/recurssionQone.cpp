#include <iostream>
using namespace std;



void summationP(int i ,int n) {

	if(i < 1){
		return ;
	}

	summationP(i-1,n + i);
	cout << "the total value is : - " << n << endl;

}

int summationF(int n){
	if(n == 0){
		return 0;
	}
	return n + summationF(n-1);
}

int  main(){

	// summationP(10,0);
	int ans = summationF(3);
	cout << "ans is : " << ans << endl;

	return 0;
}