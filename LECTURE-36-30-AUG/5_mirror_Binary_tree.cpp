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
        root->right = tree();
        return root;
    }

    void print(treenode*root){
        if(root == nullptr){
            return;
        }
        cout<<root->val<< ' ';
        print(root->left);
        print(root->right);
    }

    void mirror(treenode* root){
        if(root == nullptr) return;
        // recursive case

        // dfs(root) : mirror the given tree

        // 1. ask your friend to mirror the leftSubtree

        mirror(root->left);

        // 2. ask your friend to mirror the rightSubtree

        mirror(root->right);

        // 3. perform swap between children at root node

        swap(root->left, root->right);
    }


    int main(){
        treenode* root = nullptr;
        root = tree();
        print(root);
        mirror(root);
        print(root);
        return 0;
    }