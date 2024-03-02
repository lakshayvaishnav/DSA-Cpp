#include <iostream>
using namespace std;


class Node{
	public:
	int data;
	Node* next;

	//constructor
	Node(int data){
		this -> data = data;
		this -> next = NULL;
	}
};


void InsertAtTail(Node * & tail, int data){
	Node * lastNode = new Node(data);

	tail -> next = lastNode;
	tail  = lastNode;

}

void printLL (Node * &head){
	Node * temp = head;
	while (temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;
}


int main(){
	Node * node1 = new Node(23);
	cout << "first node is : "<< node1 -> data << endl; 

	Node * head = node1;
	Node * tail = node1;
	InsertAtTail(tail,44);
	InsertAtTail(tail, 69);
	printLL(head);

	return 0;
}