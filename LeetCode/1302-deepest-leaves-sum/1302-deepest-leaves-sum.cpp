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
    int depth = 0;
    int height = 0;
    void trav(TreeNode *node, int &ans, int depth){
        
        if(node == NULL)
            return;     
        if(node->left == NULL and node->right == NULL){
            if(depth == height)
                ans += node->val;
            else if(depth > height)
                ans = node->val, height = depth;
        }

        trav(node->left, ans, depth+1);
        trav(node->right, ans, depth+1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int ans = 0;
        trav(root, ans, 0);
        return ans;
    }
};