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

listnode* reverse(listnode* head){

    listnode * prev = NULL;
    listnode* cur  = head;

    while(cur != NULL){
        listnode * temp = cur -> next;
        cur -> next = prev;
        prev = cur;
        cur = temp;
    }
    return prev;

}

int main(){
    listnode* head = NULL;

    insert(head,10);
    insert(head,20);
    insert(head,30);
    insert(head,40);
    insert(head,50);
    print(head);
    cout<<endl;

    head = reverse(head);
    print(head);
    
    return 0;
}