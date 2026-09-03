#include <iostream>
using namespace std;

class treenode {
public:
    int val;
    treenode* left;
    treenode* right;

    treenode(int val) {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void pre(treenode* root) {
    if(root == nullptr) {
        return;
    }

    cout << root->val << ' ';

    pre(root->left);
    pre(root->right);
}

treenode* tree() {
    int val;
    cin >> val;

    if(val == -1) {
        return nullptr;
    }

    treenode* root = new treenode(val);

    root->left = tree();
    root->right = tree();

    return root;
}

bool path(treenode* root, int targetsum) {

    // No node
    if(root == nullptr) {
        return false;
    }

    // Leaf node
    if(root->left == nullptr && root->right == nullptr) {
        return root->val == targetsum;
    }

    // Remove current node's value from target
    targetsum -= root->val;

    // Check left OR right subtree
    return path(root->left, targetsum) ||
           path(root->right, targetsum);
}

int main() {

    treenode* root = nullptr;

    root = tree();

    pre(root);
    cout << endl;

    int targetsum;
    cin >> targetsum;

    if(path(root, targetsum)) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;
}