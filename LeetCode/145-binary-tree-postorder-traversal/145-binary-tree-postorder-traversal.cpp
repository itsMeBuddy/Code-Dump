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
    vector<int> postorderTraversal(TreeNode* root) {
        
        if(root==NULL)
            return {};
        
        stack<TreeNode*> st1;
        vector<int> ans;
        st1.push(root);
        
        while(!st1.empty()){
            TreeNode *temp = st1.top();
            ans.push_back(temp->val);
            st1.pop();
            if(temp->left != NULL)
                st1.push(temp->left);
            if(temp->right != NULL)
                st1.push(temp->right);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};