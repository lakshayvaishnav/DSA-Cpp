#include <iostream>
#include <map>
using namespace std;


int main() {
map<int, string> m;

m[1] = "lxsh";
m[23] = "billionaire";
m[69] = "lakshay";


m.insert({5, "bheem"});

cout << "befre erase" << endl;

for(auto i:m){
	cout << i.first << " "<< i.second <<   endl;
}

m.erase(23);
cout << "after erase" << endl;

for(auto i : m){
	cout << i.first << " " << i.second << endl;
}

auto it = m.find(69);

cout << "using find: " << endl;
for ( auto i = it ; i!= m.end() ; i++){
	cout << (*i).first <<  endl;

}

return 0;
}