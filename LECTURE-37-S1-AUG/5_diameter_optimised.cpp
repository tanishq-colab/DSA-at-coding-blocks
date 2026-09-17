#include <iostream>
using namespace std;
#include <vector>

class treenode{
    public:
    int val;
    treenode* left;
    treenode* right;
    treenode(int val){
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

treenode* build(){
    int val;
    cin>>val;
    if(val == -1) return nullptr;

    treenode* root = new treenode(val);
    root->left = build();
    root->right = build();
    return root;
}

class Pair{
    public:
    int heightt;
    int diameterr;
};

Pair dia(treenode* root){
    Pair p;
    if(root==nullptr){
        p.heightt = -1;
        p.diameterr = 0;
        return p;
    }
    Pair leftt = dia(root->left);

    Pair rightt = dia(root->right);
    
    int rootvalue = 2 + leftt.heightt + rightt.heightt;
    
    p.heightt = 1 + max(leftt.heightt,rightt.heightt);
    
    p.diameterr = max(leftt.diameterr,max(rightt.diameterr , rootvalue));
    
    return p;
}

int main(){
    treenode * root = nullptr;
    root = build();
    Pair te = dia(root);
    cout<<te.diameterr<<endl;
    return 0;
}