#include <iostream>
using namespace std;

class Node{
public:
	int data;
	Node * prev;
	Node * next;

	// constructor
	Node(int d){
		this -> data = d;
		this -> next = NULL;
		this -> prev = NULL;
	}
};

void printLL(Node * &head ){
	Node * temp = head;
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;
}

void InsertNodeAtHead(Node * &head , int value){
	Node * temp  = new Node(value);
	temp -> next = head;
	head -> prev = temp;
	head = temp;

}



int main(){

	Node * node1 = new Node(23);
	Node * head = node1;
	printLL(head);

	InsertNodeAtHead(head,24);
	InsertNodeAtHead(head,26);
	InsertNodeAtHead(head,27);
	InsertNodeAtHead(head,28);
	printLL(head);

}