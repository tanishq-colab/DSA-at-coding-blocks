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

Treenode* inser(Treenode*& root,int value){
    if(root==nullptr){
        Treenode* node = new Treenode(value);


        return node;

    }

    if (value > root->val){
      root->right =   inser(root->right,value);

    }
    else{
      root->left =  inser(root->left,value);
    }
    return root;

}

bool searching(Treenode* root, int key){

    if(root == nullptr){
        return false;
    }

    if(root->val == key){
        return true;
    }
    else if(key < root->val){
        return search(root->left,key);
    }
    else{
        return search(root->right);
    }

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
    inser(root, 14);
    preorder(root);
    return 0;

}