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
    int solve(TreeNode *node, int &ans){
        if(node == NULL)
            return 0;
        
        int lSum = max(0,solve(node->left, ans));
        int rSum = max(0,solve(node->right, ans));
        
        ans = max(ans,lSum+rSum+node->val);
        
        return node->val + max(lSum,rSum);
    }
    
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        int x = solve(root, ans);
        return ans;
    }
};