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
    TreeNode* createTree(vector<int> nums,int begin,int end){
        if(begin>end)
            return NULL;
        int max=INT_MIN;
        int index=end;
        for(int i=begin;i<=end;i++){
            if(nums[i]>max){
                max=nums[i];
                index=i;
            }
        }
        TreeNode *root=new TreeNode(max);
        root->left=createTree(nums,begin,index-1);
        root->right=createTree(nums,index+1,end);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {  
        return createTree(nums,0,nums.size()-1);
    }  
};

void dfs(TreeNode *root){
	cout<<root->val;
	if(root->left!=NULL)
		dfs(root->left);
	if(root->right!=NULL)
		dfs(root->right);
}

int main(){
	vector<int> nums={3,2,1,6,0,5};
	dfs(Solution().constructMaximumBinaryTree(nums));
}
