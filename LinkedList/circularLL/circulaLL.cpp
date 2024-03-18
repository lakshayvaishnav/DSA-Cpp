#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node * next;
	//constructor
	Node(int d){
		this -> data = d;
		this -> next = NULL;
	}

	~Node(){
		int value = this-> data;
		if(this -> next != NULL){
			delete next;
			next = NULL;
		}
		cout << "memory cleared for value " << value << endl;
	}
};

void insertNode(Node * &tail, int element , int data){
	//assuming that the list contains that element

	//if the list is empy
	if(tail == NULL){
		Node * newNode = new Node(data);
		tail = newNode;
		newNode -> next = newNode;
		// cout << "new node is inserted : " << newNode-> data << endl;
	}
	// non empty list
	else{

		Node * curr = tail;
		while(curr -> data != element){
			curr = curr -> next;
		}
		Node * temp = new Node(data);

		temp -> next = curr -> next;
		curr -> next = temp;
		// cout << "new node is inserted : " << temp-> data << endl;

	}	
}

void print(Node * &tail){

	Node * temp = tail;
	do{
		cout << temp -> data << " " ;
		temp = temp -> next;
	} while(temp != tail);
	cout << endl;
}


int main(){

	Node * tail  = NULL;
	insertNode(tail,2,69);
	print(tail);
	insertNode(tail,69,70);
	print(tail);
	insertNode(tail,70,71);
	print(tail);


	return 0;
}