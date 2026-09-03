#include <iostream>
using namespace std;
#include <vector>

struct treenode{
    int val;
    treenode*left;
    treenode*right;
    treenode(int val){
        this->val=val;
        this->left = nullptr;
        this->right=nullptr;
    }

};

treenode* tree(){
    int val;
    cin>>val;
    if(val == -1){
        return nullptr;
    }
    treenode* root = new treenode(val);
    
    root->left = tree();
    root->right=tree();

    return root;
}

int sum(treenode* root){

    if(root == nullptr)return 0;

   
    return root->val + sum(root->left) + sum(root->right);
}

int main(){
    
    treenode* root= nullptr;
    root=tree();
    cout<<sum(root);
    

    return 0;
}