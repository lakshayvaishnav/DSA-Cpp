#include <iostream>
#include <fstream>

/* useful classes for file handling :-

1. fstreambase
2. ifstream --> derived from fsteambase
3. ofstream --> derived from fsteambase


in order to work with files 
ther are 2 ways to open a file

1. using a constructor
2. using the member function open() of the class


*/

using namespace std;

int main(){
	// opening files using a constructor and writing it..
	ofstream out("sample.txt"); //write operation
	string name = "lakshay";
	out<< name;

	// opening files using a constructor and reading from  it...
	ifstream in("sample2.txt");
	string content;
	// in >> content;
	getline(in,content); // this is used to get whole line...
	cout << content;

	return 0;
}

