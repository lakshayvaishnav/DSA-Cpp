#include <iostream>
using namespace std;

int count = 0;
void recursive() {
	count++ ;

	if(count == 10){
		return ;
	} 
	cout << "recursive function called " << count << " times " << endl;

	recursive();
}

void nToOne(int n) {
	if (n == 0) {
		return ;
	}

	cout << "value of n is : " << n << endl;

	n--;
	nToOne(n);

}

int main () {

	nToOne(10);
	return 0;
}