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
    
    // Cartesian Tree
    // TC -> O(n+)
    // SC -> O(n)
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        stack<TreeNode*> st;
        for(int i=0;i<nums.size();i++){
            TreeNode *node = new TreeNode(nums[i]);
            while(st.empty()==false and st.top()->val < node->val){
                node->left = st.top();
                st.pop();
            }
            if(st.empty()==false){
                st.top()->right = node;
            }
            st.push(node);
        }
        
        while(st.size() != 1)
            st.pop();
        
        return st.top();
        
    }
};