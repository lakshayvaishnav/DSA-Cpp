#include <iostream>
#include <list>
using namespace std;



int main() {

list <int> l;

l.push_back(100);

l.push_front(2343);


for(int i:l){
	cout << i << " " ;
}
cout << endl;
cout << "size of the list : - " << l.size() << endl;

cout << " new list " << endl;

list <int> l2(5,69);

for(int i : l2){
	cout << i << " ";
}

return 0;
}