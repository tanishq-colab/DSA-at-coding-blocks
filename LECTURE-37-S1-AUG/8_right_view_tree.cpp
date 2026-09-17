#include <iostream>
using namespace std;
#include <vector>
#include<queue>
class treenode{
    public:
    int val;
    treenode* left;
    treenode* right;
    treenode(int val){
        this->val = val;
        this->left =nullptr;
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
    root->right = build();
    return root;
}

void rightview(treenode* root){
    if(root  == nullptr){
        return;
    }
    queue<treenode*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        treenode* curr = q.front();
        q.pop();
        if(curr == nullptr)
        {
            cout<<endl;
        
             if(!q.empty())
            {
                q.push(nullptr);
            }
        }
        else {
            if(q.front() == nullptr){
                cout<<curr->val<<' ';

            }
            if(curr->left != nullptr){

                q.push(curr->left);
            }
            if(curr->right!= nullptr){
                q.push(curr->right);
            }
        }   
    }
}

int main(){

    treenode* root = nullptr;
    root = build();
    rightview(root);
    return 0;
}