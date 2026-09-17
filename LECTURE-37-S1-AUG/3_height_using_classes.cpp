#include <iostream>
using namespace std;
#include <vector>
//#define NULL null
struct treenode{
    int val;
    treenode* left;
    treenode* right;

    treenode(int val){
        this->val=val;
        this->left = nullptr;
        this->right = nullptr;
}
};
treenode* build(){
    int val;
    cin>>val;
    if(val == -1){
        return nullptr;
    }
    treenode* root = new treenode(val);
    root->left = build();
    root->right=build();
    return root;
}

class pai{
    public:
    int hei;
    bool bal;
};

pai balanced(treenode* root){
    pai p;
    if(root == nullptr){
        p.hei = -1;
        p.bal = true;
        return p;
    }

    pai lft = balanced(root->left);
    
    pai rgt = balanced(root->right);
    
    bool isba = abs(lft.hei - rgt.hei)<=1 ?true:false;
    
    p.bal = lft.bal and rgt.bal and isba;
    
    p.hei = 1+ max(lft.hei,rgt.hei);
    
    return p; 
}


int main(){
    treenode* root = nullptr;
    root = build();
    pai p = balanced(root);

    p.bal ? cout<<"bal" : cout<<"not"<<endl;
    
    cout<<p.hei;
    
   return 0;
}