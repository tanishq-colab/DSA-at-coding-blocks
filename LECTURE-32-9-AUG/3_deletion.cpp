#include <iostream>
using namespace std;
#include <vector>

class listnode{
    public:
    int val;
    listnode* next;
    listnode(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insert(listnode*& head,int val){
    listnode* n = new listnode(val);
        n->next = head;
        head = n;
}

void p(listnode* head){
    while(head!=NULL){
        cout<<head-> val<<' ';
        head = head->next;
    }
}

void del(listnode*& head){
    if(head == NULL){
        return;
    }
    listnode* temp = head;
    head = head-> next;
    delete temp;
}

int main(){
    listnode*head =NULL;
    insert(head,50);
    insert(head,40);
    insert(head,30);
    insert(head,20);
    p(head);
cout<<endl;
    del(head);

    p(head);

    return 0;
}



#include<iostream>

using namespace std;

class ListNode {

public :

	int val;
	ListNode* next;

	ListNode(int val) {
		this->val = val;
		this->next = NULL;
	}

};

void insertAtHead(ListNode*& head, int val) {

	ListNode* n = new ListNode(val);
	n->next = head;
	head = n;

}

void printLinkedList(ListNode* head) {

	while (head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}

	cout << endl;
}

// time : O(1)

void deleteAtHead(ListNode*& head) {
	if (head == NULL) {
		// linkedList is empty
		return;
	}
	ListNode* temp = head;
	head = head->next;
	delete temp;
}

// time : O(1)

ListNode* deleteAtHead(ListNode* head) {
	ListNode* temp = head;
	head = head->next;
	delete temp;
	return head;
}

int main() {

	ListNode* head = NULL; // linked list is initially empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head); // 10 20 30 40 50

	deleteAtHead(head);
 head = deleteAtHead(head);

	printLinkedList(head); // 10 20 30 40


	return 0;
}