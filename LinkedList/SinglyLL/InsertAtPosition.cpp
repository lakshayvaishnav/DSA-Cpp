#include <iostream>
using namespace std;


class Node{
public:
	int data;
	Node * next;

	// constructor...
	Node(int data){
		this -> data  = data;
		this -> next = NULL;
	}
};


void insertAtPosition(Node * &head,int positon ,int data){
	Node * temp = head;
	int cnt = 1;
	while(cnt < positon ){
		temp = temp -> next;
		cnt ++;
	}

	Node * newNode = new Node(data);
	newNode -> next = temp -> next;
	temp -> next = newNode;

}

void InsertAtTail(Node * &tail,int data){
	Node * newNode = new Node(data);
	tail->next = newNode;
	tail = newNode;
}


void printLL(Node * &head){
	Node * temp = head;
	temp = head;
	while(temp != NULL){
		cout << temp -> data << " " ;
		temp = temp -> next;
	}
	cout << endl;
}

int main(){

	Node * node1 = new Node(2);
	cout << "first node is : " << node1 -> data << endl;
	Node * head = node1;
	Node * tail = node1;

	InsertAtTail(tail,23);
	InsertAtTail(tail,24);
	InsertAtTail(tail,26);

	insertAtPosition(head,2,100);

	printLL(head);
	return 0;
}