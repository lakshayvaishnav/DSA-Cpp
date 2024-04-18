#include <iostream>
using namespace std;

class Node {
public:
	int value;
	Node * next;
	Node(int value) : value(value) : next(nullptr){} 

	 void append(int value) {
        ListNode* newNode = new ListNode(value);
        ListNode* temp = this;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void printList() { // Modified to print the values instead of addresses
        ListNode* temp = this;
        while (temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

class Solution{
public:

		bool hasCycle(Node * head){
			Node * slow = head;
			Node * fast = head;
			while (fast != nullptr){
				slow = slow -> next;
				fast = fast -> next;
				if(fast != nullptr){
					fast = fast -> next;
				}

				if(fast == slow){
					return true;
				}
			}
			return false;
		}
}



int main() {
	

}