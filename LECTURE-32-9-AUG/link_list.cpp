#include <iostream>
using namespace std;
#include <vector>

class listnode{
    public:
    int val;
    listnode* next;
    listnode(int val){
        this-> val = val;
        this-> next = NULL;
    }
};

int main(){

   listnode * n1 =  new listnode(10);
    cout<< n1->val<<endl;

    listnode* n2 = new listnode(20);
    cout<<n2->val<<endl;
    
    n1->next = n2;
    
    cout<<n1->next<<endl;
    
    cout<<n2<<endl; // address

    cout<<n1->next->val; // IMPORTANT REVISE

    return 0;
}