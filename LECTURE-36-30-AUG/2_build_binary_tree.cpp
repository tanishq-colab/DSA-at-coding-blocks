#include <iostream>
using namespace std;
#include <vector>

class treenode{
    public:
    int val;
    treenode*left;
    treenode*right;
    treenode(int val){
        this->val = val;
        this->left = nullptr;
        this-> right=nullptr;
    }
};

void pre(treenode* root){
    if(root == nullptr){
        return;
    }
    cout<<root->val<<' ';
    pre(root->left);
    pre(root->right);

}

treenode* tree(){
    int val;
    cin>>val;
    if(val == -1){
        return nullptr;
    }
    treenode* root = new treenode(val);

    root->left = tree();
    root->right = tree();
    return root;
}

int main(){
    treenode* root = nullptr;
    root = tree();
    pre(root);
    return 0;
}