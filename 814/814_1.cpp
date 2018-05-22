#include<iostream>
#include<vector>
using namespace std; 

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
    	if(!root)
    		return NULL;
        root->left=pruneTree(root->left);
        root->right=pruneTree(root->right);
        if(!root->left&&!root->right&&!root->val)
            return NULL;
        else
            return root;
    }
};

void preTraversal(TreeNode *root, vector<int> &res){
    if (root == NULL)
        return;
    res.push_back(root->val);
    preTraversal(root->left, res);
    preTraversal(root->right, res);
}

vector<int> preorderTraversal(TreeNode* root) {
    vector<int> res;
    preTraversal(root, res);
    return res;
}

int main(){
	TreeNode *root=new TreeNode(1);
	root->left=new TreeNode(1);
	root->left->left=new TreeNode(1);
	root->left->left->left=new TreeNode(0);
	root->left->right=new TreeNode(1);
	root->right=new TreeNode(0);
	root->right->left=new TreeNode(0);
	root->right->right=new TreeNode(1);
	Solution().pruneTree(root);
	for(auto i:preorderTraversal(root))
		cout<<i<<" ";
}
