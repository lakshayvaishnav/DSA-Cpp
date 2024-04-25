#include <iostream>
#include <vector>
using namespace std;




int main()
{
	std::vector<int> v;
	v.push_back(23);
	v.push_back(23);

	v.push_back(23);

	v.push_back(23);
	v.push_back(69);
	cout << v.capacity() << endl;
	cout << v.front() << endl;
	cout << v.back() << endl;
	return 0;
}