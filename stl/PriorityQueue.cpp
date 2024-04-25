#include <iostream>
#include <queue>
using namespace std;




int main(){
// max - heaep

cout << "### Max - Heap ###" << endl;
priority_queue <int> maxi; 
maxi.push(2);
maxi.push(49);
maxi.push(69);
maxi.push(11);

int n = maxi.size();

for (int i = 0 ;  i < n ; i ++ ) {

cout << 	maxi.top() << "  " ;
	maxi.pop();
}

cout << endl;


cout << "### Min - Heap ###" << endl;

priority_queue< int , vector<int> , greater<int> > mini;

mini.push(2);
mini.push(49);
mini.push(69);
mini.push(11);
mini.push(100);

int m = mini.size();

for (int i = 0 ;  i < m ; i ++ ) {

cout << 	mini.top() << "  " ;
	mini.pop();
}

cout << endl; 

	return 0;


}