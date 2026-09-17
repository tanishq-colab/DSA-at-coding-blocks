#include <iostream>
using namespace std;
#include <vector>
#include<climits>
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

int findmin(Treenode* root){
    if(root == nullptr){
        return INT_MAX;
    }
    while(root->left != nullptr){
        root = root->left;
    }
    return root->val;

}

int findmax(Treenode* root){
    if(root == nullptr){
        return INT_MIN;
    }
    while(root->right != nullptr){
        root = root->right;
    }
    return root->val;
}

bool checkbst(Treenode* root){
    
    if(root == nullptr){
        return true;
    }

    //check if left is bst
    bool lef = checkbst(root->left);

    //check if right id bst
    bool righ = checkbst(root->right);
    
    //check root val is > left max and val is < right min.

    bool ro = root->val > findmax(root->left) and root->val < findmin(root->right) ? true : false;
    return lef and righ and ro;

}

int main(){
    Treenode* root = nullptr;
    
	 root = new Treenode(10);

	root->left = new Treenode(5);
	root->left->left  = new Treenode(3);
	root->left->right = new Treenode(7);

	root->right = new Treenode(15);
	root->right->left  = new Treenode(13);
	root->right->right = new Treenode(17);
 checkbst(root) ? cout<<"is bst" : cout<<"not bsd"; 
    return 0;

}