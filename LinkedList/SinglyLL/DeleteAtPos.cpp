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

		//destructor
		~Node(){
			int data = this -> data;
			//memory free
			if(this ->next != NULL){
				delete next;
				this -> next = NULL;
			}
			cout << "memory is free for the node with data : " << data << endl;
		}
};

void deleteAtPos(Node * &head,int positon){
// for first node :
	if(positon == 1){
		Node * temp = head;
		head = head -> next;
		temp -> next = NULL;
		delete temp;
	}
	// deleting for other nodes....
	else{
		Node * curr = head;
		Node * prev = NULL;

		int cnt = 1;
		while (cnt < positon){
			prev = curr;
			curr = curr -> next;
			cnt ++ ;
		}

		prev -> next = curr -> next;
		curr -> next = NULL;
		delete curr;
	}
}

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

	Node * firstNode = new Node(2);
	Node * head = firstNode;
	Node * tail = firstNode;
	InsertAtTail(tail,3);
	InsertAtTail(tail,4);
	InsertAtTail(tail,5);
	InsertAtTail(tail,6);

	deleteAtPos(head,4);
	printLL(head);

	return 0;
}