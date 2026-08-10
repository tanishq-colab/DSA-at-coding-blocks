#include <iostream>
using namespace std;
#include <vector>

class listnode{
    public:
    int val;
    listnode* next;
    listnode(int val){
        this->val = val;
        this-> next = next;
    }
};

void insert(listnode*& headptr , int val){
    listnode * n = new listnode(val);
    n->next = headptr;
    headptr= n;
}

void print(listnode*head){
    while(head != NULL){
        cout<<head->val<<' ';
        head = head->next;
    }
}

void inserttail(listnode*& head,int val){
    
    if(head == NULL)
    head->next = 

    listnode * n = new listnode(val);
    
    listnode* temp = head;
    
    while(head->next != NULL)
    {
        head = head -> next;
    }
}

int main(){
    listnode* head = NULL;

    insert(head,10);
    insert(head,20);
    insert(head,30);
    insert(head,40);
    insert(head,50);
    print(head);
    inserttail(head,val);
   
    return 0;
}