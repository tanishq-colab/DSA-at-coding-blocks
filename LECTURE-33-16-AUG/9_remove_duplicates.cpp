#include <iostream>
using namespace std;
#include <vector>

class listnode{
    public:
    int val;
    listnode* next;
    listnode(int val){
        this->val=val;
        this->next = next;
    }

}

void remo(listnode*head){

    listnode*prev = head;
    listnode*curr = head->next;

    while(curr->next!= nullptr){
        if(prev == curr){
            curr=curr->next;
        }
        else{
            prev->next = curr;
            prev = prev-> next;
            curr = curr->next;
        }
    }
    prev->next = nullptr;

}

int main(){
   

        ListNode* head = new ListNode(10);
        head->next = new ListNode(20);
        head->next->next = new ListNode(30);
        head->next->next->next = new ListNode(40);
        head->next->next->next->next = new ListNode(50);
        head->next->next->next->next->next = new ListNode(60);
        head->next->next->next->next->next->next = head->next;
        
    return 0;
}