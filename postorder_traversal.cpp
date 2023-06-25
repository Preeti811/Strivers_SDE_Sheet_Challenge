/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL)
            return ans;
        //recursive approach
        // postorderTraversal(root->left);
        // postorderTraversal(root->right);
        // ans.push_back(root->val);
        // return ans;


        //iterative approach
        stack<TreeNode*> st;
        while(root){
            root=root->left;
        }
        
    }
};
