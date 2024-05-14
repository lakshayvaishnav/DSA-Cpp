#include <iostream>
using namespace std;


int fibonnacci(int n){
	if(n<=1){
		return n;
	}
	int last = fibonnacci(n-1);
	int slast = fibonnacci(n-2);
	return last + slast;
}

int main() {
	int ans = fibonnacci(4);
	cout << "ans is : - " << ans << endl;

	return 0;
}