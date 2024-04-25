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


set<int> ::iterator it = s.begin();
it++; 

s.erase(it);
cout << "after erasing : " << endl;   
for ( auto i : s){
	cout << i << " " ;
}

cout << endl;

cout << "46 is present or not : " << s.count(46) << endl;


set<int> ::iterator itr =  s.find(12);

for(auto it = itr ; it != s.end(); it++){
	cout << *it << "  ";

}

}