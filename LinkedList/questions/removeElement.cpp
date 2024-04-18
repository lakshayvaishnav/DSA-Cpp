#include <iostream>
using namespace std;

class Node {
	public : 
	int val;
	Node * next;
	// constructor.

	Node(int val): val(val), next(nullptr){}

	Node *	 removeElements(Node * head , int val){
		if(head == nullptr ){
			return head;
		}
		Node * current = head;
		while(current->next != nullptr){
			if(current->val == val){
				Node * temp = current;
				current = current-> next;
				delete temp;
			}
			else{
				current = current-> next;
			}
		}
		return head;
	}

	 void append(int value) {
        Node* newNode = new Node(value);
        Node* temp = this;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void printList() { // Modified to print the values instead of addresses
        Node* temp = this;
        while (temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};



int main(){

	Node * head = new Node(3);
	head->append(4);
	head->append(5);
	head->append(6);
	head->append(7);
	head->append(8);
	head->printList();
	cout << "after removal : " << endl;
	int valuetoremove = 7;
	head = head->removeElements(head,4);
	head->printList();

	return 0;
}