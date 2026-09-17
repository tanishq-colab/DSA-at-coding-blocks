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
        this ->right = nullptr;
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
    root->right = build();
    return root;
}

int heightoftree(treenode* root){
    if(root == nullptr){
        return -1;
    }

    return 1 + max(heightoftree(root->left),heightoftree(root->right));

}

int dia(treenode* root){
    if(root == nullptr){
        return 0;
    }
    int l = dia(root->left);
    int r = dia(root->right);
    int n = 2 + heightoftree(root->left) + heightoftree(root->right);
    return max(l,max(r,n));
}


int main(){
    treenode * root = nullptr;
    root = build();

    cout<<dia(root);
    return 0;
}