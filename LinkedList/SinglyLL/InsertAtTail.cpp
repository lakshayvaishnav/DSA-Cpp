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


void InsertAtTail(Node * & head, int data){
	//first traverse and fint the last node....
	Node * LastNode = head;
	while (LastNode -> next != NULL){
		LastNode = LastNode -> next;

	}
	Node * newNode = new Node(data);
	LastNode -> next = newNode;  //adding the last node...
	cout << "node " << newNode-> data  << " inserted at tail" <<  endl;
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
	InsertAtTail(head,44);
	InsertAtTail(head, 69);
	printLL(head);

	return 0;
}