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

	~Node(){
		int val = this -> data;
		if(next != NULL){
			delete next;
			next = NULL;
		}
		cout << "memory is free for the data : " << val << endl;
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

void InsertAtTail(Node * &tail, int value){
	Node * temp = new Node(value);
	tail -> next = temp;
	temp -> prev = tail;
	tail = temp;

}

void insertAtPosition(Node * &head, int positon, int value ){
	Node * newNode = new Node(value);
	Node * tempPtr = head;
	for(int i = 0;i< positon;i++){
			tempPtr = tempPtr -> next;
	}
	newNode -> next = tempPtr -> next;
	tempPtr -> next -> prev = newNode;
	tempPtr ->next = newNode;
	newNode -> prev =  tempPtr;
}

void deleteNode(Node * &head , int positon ){
	if(positon == 1){
		Node * temp = head;
		temp -> next -> prev = NULL;
		head = temp -> next;
		temp -> next = NULL;
		delete temp;
	}
}

int main(){

	Node * node1 = new Node(23);
	Node * head = node1;
	Node * tail = node1;
	printLL(head);

	InsertNodeAtHead(head,24);
	InsertNodeAtHead(head,26);
	InsertNodeAtHead(head,27);
	InsertNodeAtHead(head,28);
	InsertAtTail(tail,69);
	insertAtPosition(head, 2,100);
	printLL(head);

}