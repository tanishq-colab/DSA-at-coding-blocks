#include <iostream>
using namespace std;
#include <vector>

class Treenode{
    public:
    int val;
    Treenode* left;
    Treenode* right;
    Treenode(int val){
        this->val=val;
        this->left = nullptr;
        this->right = nullptr;
    }

};

void preorder(Treenode* root){
    if(root == nullptr){
        cout<<-1<<' ';
        return;
    } cout<<root->val<<' ';
  
    preorder(root->left);
    preorder(root->right);
   
}
void inorder(Treenode* root){
    if(root == nullptr){
        cout<<-1<<' ';
        return;
    }
   inorder(root->left);
    cout<<root->val<<' ';
   inorder(root->right);
}

void postorder(Treenode* root){
    if(root==nullptr){
        cout<<-1<<' ';
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<' ';

}


int main(){
    Treenode* root = nullptr;
    root = new Treenode(10);
    root->left = new Treenode(20);
    root -> right = new Treenode(30);
    root->left->left = new Treenode(40);
    root->left->right = new Treenode(50);
    root->left->right->left = new Treenode(70);
    root -> right->right = new Treenode(60);
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    return 0;

}