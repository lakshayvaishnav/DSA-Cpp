#include <iostream>
#include <queue>
using namespace std;




int main() {

queue <string> q;

q.push("love");
q.push("lxsh");
q.push("lion");


cout << q.front() << " " << q.back()  << endl;
q.pop();
cout  << "front is " << q.front() << endl;


}