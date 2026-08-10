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

bool ispresent(listnode* head,int t){
    while(head != NULL){
        if(head->val == t) return true;
        else (head = head->next);
    }
    return false;
}

bool searchrecursive(listnode* head,int target){
    if(head == NULL){
        return false;
    }
    if(head->val == target){
        return true;
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
    cout<<endl;
  //  cout<<lengthrecursive(head);
  //  cout<<endl;

    ispresent(head,55) ? cout<<"present" : cout<<"not";
    
    return 0;
}