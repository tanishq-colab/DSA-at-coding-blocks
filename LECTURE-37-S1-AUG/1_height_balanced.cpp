


#include<iostream>

using namespace std;

class TreeNode {
public:
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val) {
		this->val = val;
		this->left = this->right = NULL;
	}
};


TreeNode* buildTree() {

	int val;
	cin >> val;

	// base case

	if (val == -1) {
		// construct an empty tree and return pointer to its root TreeNode
		return NULL;
	}


	TreeNode* root = new TreeNode(val);



	root->left = buildTree();


	root->right = buildTree();

	return root;

}


int dfs(TreeNode* root) {

	// base case
	if (root == NULL) {
		return -1;
	}


	int leftHgt = dfs(root->left);

	int rightHgt = dfs(root->right);

	return 1 + max(leftHgt, rightHgt);

}

bool balanced(TreeNode* root){
    if(root == nullptr) return true;

    bool lef = balanced(root->left);

    bool rgt = balanced(root->right);
    
	bool bal = abs(dfs(root->left) - dfs(root->right)) <=1? true:false;
    
	return lef and rgt and bal;

}

int main() {

	TreeNode* root = buildTree();

	cout << (balanced(root)? "true":"false");

	return 0;
}