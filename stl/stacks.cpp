#include <iostream>
#include <stack>
using namespace std;




int main() {

stack <string> s;

s.push("lxsh");
s.push("lakshay");



for(string i : s){
	cout << i <<"  ";
}

cout << "top element : " << s.top() << endl;

	// return 0;
}