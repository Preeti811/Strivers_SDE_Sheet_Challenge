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
    vector<int> inorderTraversal(TreeNode* root) {
      
        vector<int> ans;         
        if(root==nullptr)
            return ans ;                         
     // inorderTraversal(root->left);
     // ans.push_back(root->val);
     // inorderTraversal (root->right);             
     // return ans; 
        
        TreeNode *temp=root;
        stack<TreeNode*>st;
        
        while(temp || !st.empty()){   
            while(temp){         
                st.push(temp);
                temp=temp->left; 
            }

            temp=st.top();
            st.pop();
            ans.push_back(temp->val);            
            temp=temp->right;
                       
        }      
       
     return ans;   
    }
};

