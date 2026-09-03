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

int tot=0;
void sum(treenode* root){

    if(root == nullptr)return;

   
    tot+=root->val;
    sum(root->left);
    sum(root->right);

}

int main(){
    
    treenode* root= nullptr;
    root=tree();
    sum(root);
    cout<<tot;

    return 0;
}