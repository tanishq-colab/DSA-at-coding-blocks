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
int cnt=0;

void printLinkedList(ListNode* head) {

	while (head != NULL) {
        cnt++;
		cout << head->val << " ";
		head = head->next;
	}

	cout << endl;

}

ListNode* midpt(ListNode* head,int cnt){
    cnt = cnt/2;
    while(cnt--){
       
        head = head-> next;
    }
    return head;
}

ListNode* midptoptimised(ListNode* head){

    if(head == NULL) return NULL;

    ListNode* slow = head;
    ListNode* fast = head->next;
    while(fast!=NULL and fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main() {

	ListNode* head = NULL; // initially, linkedList is initially empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);
    
	//cout<<cnt;
   ListNode* mid =  midpt(head,cnt);
   cout<<mid->val<<endl;

  ListNode* midp =  midptoptimised(head);
 if(mido!=NULL){ cout<<midp->val;}
 else cout<<"empty";
	return 0;

}