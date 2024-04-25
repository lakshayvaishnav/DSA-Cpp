#include <iostream>
#include <deque>
using namespace std;




int main(){

	deque<int> d;
	d.push_back(1);
	d.push_front(23);
	d.push_front(69);
	for(int i:d){
		cout << i << "  " ;
	}

	cout << endl;
	// d.pop_front();


	// for(int i:d){
	// 	cout << i << "  " ;
	// }

cout << "print first element : " << d.at(0) << endl;

cout << "front : " << d.front() << endl;
cout << "back : " << d.back() << endl;

cout << "before erase " << d.size() << endl;
d.erase(d.begin(),d.begin()+1);
cout << "after erase " << d.size() << endl;

for(int i : d){
	cout << i << "  " ;
}

	return 0;
}