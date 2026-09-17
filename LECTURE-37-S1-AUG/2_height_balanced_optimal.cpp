#include <iostream>
using namespace std;
#include <vector>

class treenode{
    public:
    int val;
    treenode*left;
    treenode* right;
    treenode(int val){
        this->val = val;
        this->left =nullptr;
        this-> right = nullptr;
    }
};

treenode* build(){

    int val;
    cin>>val;
    if(val == -1){
        return nullptr;
    }
    treenode* root = new treenode(val);
    root->left =build();
    root->right = build();
    return root;

}

pair<bool, int> checko(treenode* root){

    pair<bool,int> p;
    //base case
    if(root == nullptr){
        p.first = true;
        p.second = -1;
        return p; 
    }
    //receurive case

    pair<bool,int> lef = checko(root->left);

    pair<bool,int> rgt = checko(root->right);
    
    bool work = abs(lef.second - rgt.second) <= 1 ? true : false;
    
    p.first = lef.first and rgt.first and work;
    
    p.second = 1 + max(lef.second,rgt.second);
    
    return p;   

}

int main(){
    treenode* root = nullptr;
 root=build();


    return 0;
}