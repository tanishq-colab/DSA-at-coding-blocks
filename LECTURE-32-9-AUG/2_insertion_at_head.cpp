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

int main(){
    listnode* head = NULL;
    insertathead(head,10);
    insertathead(head,20);
    insertathead(head,30);
    insertathead(head,40);
    insertathead(head,50);
    print(head);
    return 0;
}