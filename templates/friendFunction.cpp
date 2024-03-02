#include <iostream>
using namespace std;

class complex{
	int a,b;

public:
	void setNumber(int x,int y){
		a = x;
		b = y;
	}

	friend complex sumComplex(complex o1, complex o2);

	void getNumber(){
		cout << "your number is " << a <<" + " << b << "i";
	}
};

complex sumComplex(complex o1,complex o2){
	complex o3;
	o3.setNumber((o1.a + o2.a),(o1.b + o2.b));
	return o3;
}


int main () {

complex o1,o2,sum;
o1.setNumber(2,3);
o1.getNumber();

cout << endl;

o2.setNumber(2,4);
o2.getNumber();

 sum = sumComplex(o1,o2);
 sum.getNumber();
}