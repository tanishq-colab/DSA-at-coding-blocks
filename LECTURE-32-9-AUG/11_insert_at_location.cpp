#include <iostream>
using namespace std;
#include <vector>

class listnode{
    public:
    int val;
    listnode* next;
    listnode (int val){
        this->val = val;
        this->next = NULL;
    }
};

void insertathead(listnode*& headptr , int val){
    listnode* n = new listnode(val);
    n->next = headptr;
    headptr = n;
}

void print(listnode* head){

    while(head != NULL){
        cout<<head->val<<' ';
        head = head->next;
    }
    cout<<endl;
}

listnode* get(listnode* head,int i){
     while(i-- && head!= NULL){
        head = head->next;
     }
     return head;
}

void loc(listnode* head,int i,int value){
    listnode* n = new listnode(25);

    listnode* prev = get(head,i-1);

    if(prev == NULL) return;
    listnode* curr = prev-> next;
    n->next = curr;
    prev->next = n;
}

int main(){
    listnode* head = NULL;
    insertathead(head,10);
    insertathead(head,20);
    insertathead(head,30);
    insertathead(head,40);
    insertathead(head,50);
    print(head);
    cout<<endl;
    loc(head,1,25);
    print(head);
    return 0;
}