#include <iostream>
using namespace std;


template <class T>
class Myvector{
public:
	T * arr;
	int size;
public:
	Myvector(int m){
		size = m;
		arr = new T[size];
	}

	T  dotProduct(Myvector &v){
		T d = 0;
		for(int i = 0;i<size;i++){
			d += this->arr[i] * v.arr[i];
		}
		return d;
	}
};

int main(){
	Myvector <float> v1(3);
	v1.arr[0] = 1.4;
	v1.arr[1] = 3.3;
	v1.arr[2] = 0.1;

	Myvector <float> v2(3);
	v2.arr[0] = 0.1;
	v2.arr[1] = 1.90;
	v2.arr[2] = 4.1;

	float result = v1.dotProduct(v2);
	cout << result << endl;

	return 0;
}