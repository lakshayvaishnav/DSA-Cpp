#include <iostream>
using namespace std;

bool checkPallindrome(int i , string &s){
	if(i >= s.size() /2) return true;
	if(s[i] != s[s.size() - i -1]) return false;
	return checkPallindrome(i + 1, s);
}

int main() {

	string s = "madwm";

	cout <<	checkPallindrome(0,s) << endl;
	return 0;
}