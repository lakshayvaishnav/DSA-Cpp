#include <iostream>
using namespace std;

class Node{
public:
	int data;
	Node * next;

	//constructor
	Node(int data){
		this -> data = data;
		this -> next = NULL;
	}
};

void InsertAtHead(Node * &head, int data){

	//create new node
	Node * newNode = new Node(data);
	newNode -> next = head;
	head = newNode;
	cout << "new node " << head -> data <<" is inserted at head..." << endl;
}

void printLL(Node * &head){
	if (head == NULL){
		cout << "list is empty .." << endl;
		return;
	}
	Node *temp = head;
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;
}

int main(){

	Node* newNode = new Node(12);
	Node * head = newNode;
	cout << "first node is :" << newNode -> data << endl;
	cout << "head of firstNode is :" << head << endl;

	InsertAtHead(head,69);
	InsertAtHead(head,44);
	printLL(head);


	return 0;
}