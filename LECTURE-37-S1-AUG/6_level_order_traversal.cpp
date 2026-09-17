#include <iostream>
using namespace std;
#include <vector>
#include<queue>

class treenode{
    public:
    int val;
    treenode*left;
    treenode*right;
    treenode(int val){
        this->val = val;
        this-> left = nullptr;
        this->right = nullptr;
    }
};

treenode* build(){
    int val;
    cin>>val;
    if(val ==-1){
        return nullptr;
    }
    treenode* root = new treenode(val);
    root->left = build();
    root->right = build();
    return root;
}

void print(treenode* root)
{
    queue<treenode*>q;

    q.push(root);

    while (!q.empty())
    {

        treenode* curr = q.front();

        q.pop();

        cout<<curr->val << ' ';

        if(curr->left != nullptr){

            q.push(curr->left);

        }
        if(curr->right != nullptr){

            q.push(curr->right);

        }
    }
    
}


int main(){
    treenode* root = nullptr;
    root = build();
    print(root);
    return 0;
}