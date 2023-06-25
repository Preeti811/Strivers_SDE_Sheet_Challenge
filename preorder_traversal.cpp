class Solution {
public:  
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode* root) {                
        if(root==NULL)
            return ans;
        //recursive approach
        // ans.push_back(root->val);
        // preorderTraversal(root->left);
        // preorderTraversal(root->right);
        // return ans;

        //iterative
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* temp=st.top();
            st.pop();
            ans.push_back(temp->val);
            
            if(temp->right)
                st.push(temp->right);
            
            if(temp->left)
                st.push(temp->left);
        }
        return ans;
    }
};
