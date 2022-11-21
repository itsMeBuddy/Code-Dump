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
    
    // TC -> O(2n)
    // SC -> O(height+height) -> stack space
    
    void preOrder_change(TreeNode *node, int &currSum){
        if(node == NULL)
            return;
        
        preOrder_change(node->left, currSum);
            // cout<<node->val<<" : "<<currSum<<endl;
            int temp = currSum;
            currSum -= node->val;
            node->val = temp;
        preOrder_change(node->right, currSum);
        
    }
    
    void inOrder_sum(TreeNode *node, int &sum){
        if(node == NULL)
            return;
        
        inOrder_sum(node->left, sum);
            sum += node->val;
        inOrder_sum(node->right, sum);
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        
        int sum = 0;
        
        inOrder_sum(root, sum);
        preOrder_change(root, sum);
        
        return root;
    }
};