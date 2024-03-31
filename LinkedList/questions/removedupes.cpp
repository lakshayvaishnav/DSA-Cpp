#include <iostream>
using namespace std;


class ListNode {
public:
	int val;
	ListNode * next;
	ListNode(int val):val(val),next(nullptr){}

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

	public : 
	ListNode * deleteDuplicates (ListNode * head){
		// head is null or next is null
		if(head == nullptr || head -> next == nullptr){
			return head;
		}
		ListNode * current = head;
		while(current->next != nullptr){
			if(current->val  == current->next->val){
				ListNode * temp = current->next;
				current->next = current->next->next;
				delete temp;
			}
			else{
				current = current->next;
			}
		}

		return head;

	}
};



int main() {
cout << "hello world" << endl;

		ListNode * head = new ListNode(2);
		head->append(3);
		head->append(4);
		head->append(4);
		head->append(6);
		head->printList();

		Solution sol;
		ListNode * result = sol.deleteDuplicates(head);
		cout << "after deletion : -" << endl;
		result->printList();


return 0;
}