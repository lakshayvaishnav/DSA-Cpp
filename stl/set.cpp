#include <iostream>
#include <set>
using namespace std;


int main() {
set<int> s;

s.insert(4);
s.insert(41);
s.insert(42);
s.insert(46);
s.insert(12);
s.insert(11);
s.insert(41);

for(auto i : s){
	cout << i << "  " ;
}

cout << endl; 

}